#include <QRegExp>
#include "controleur.h"
#include "Stockage.h"

bool Controleur::estOperateur(const QString &c)
{
    Operateur *resultat = OpeManager->operateur_map[c];
    return (resultat != nullptr);
}

Operateur *Controleur::getOperateur(const QString &c)
{
    Operateur *resultat = OpeManager->operateur_map[c];
    if (!resultat)
        throw CalculatorException("Invalide String");
    return resultat;
}

bool Controleur::estLitEntier(const QString &c)
{
    bool flag = false;
    c.toInt(&flag);
    return flag;
}

bool Controleur::estLitRattionelle(const QString &c)
{
    QList<QString> list = c.split('/');
    if (list.size() == 2)
    {
        if (estLitEntier(list[0]) && estLitEntier(list[1]))
        {
            if (list[1].toInt() == 0)
                return false;

            return true;
        }
    }
    return false;
}

bool Controleur::estLitReelle(const QString &c)
{
    bool flag = false;
    c.toDouble(&flag);
    return flag;
}

bool Controleur::estLitterale(const QString &c)
{
    return (estLitEntier(c) || estLitRattionelle(c) || estLitReelle(c) || estLitExpression(c) || estLitAtom(c) || estLitProgramme(c));
}

Litterale *Controleur::getLitterale(const QString &c)
{
    if (estLitEntier(c))
    {
        return new LitEntier(c.toInt());
    }

    if (estLitRattionelle(c))
    {
        QList<QString> list = c.split('/');
        return new LitRationelle(list[0].toInt(), list[1].toInt());
    }

    if (estLitReelle(c))
    {
        double temp = c.toDouble();
        return new LitReelle(temp);
    }

    if (estLitExpression(c))
    {
        return new LitExpression(c);
    }

    if (estLitAtom(c))
    {
        return OpeManager->stockage->getLitAtom(c);
    }

    if (estLitProgramme(c))
    {
        return new LitProgramme(c);
    }
}

bool Controleur::estLitExpression(const QString &c)
{
    QRegExp exp("^'[A-Z]+[0-9]*[A-Z]*'$");
    return c.contains(exp);
}

bool Controleur::estLitAtom(const QString &c)
{
    QRegExp exp("^[A-Z]+[0-9]*[A-Z]*$");
    return c.contains(exp);
}

bool Controleur::estLitProgramme(const QString &c)
{
    if (c[0] == "[" && c[c.length() - 1] == "]")
        return true;
    return false;
}

void Controleur::traiterLitProgramme(const QString &c)
{
    QString suiteOperand;

    suiteOperand = c.mid(1, c.length() - 2);
    traiter(suiteOperand);
}

void Controleur::chargerPrecedent()
{
    if (history_index > 0)
    {
        history_index--;
        maPile = &careTakerPile->getMementoPile(history_index).getEtatPile();
        // maPile->afficher();
        // OpeManager->stockage = careTakerPile->getMementoPile(history_index).getStockage();
    }
}

void Controleur::chargerSuivant()
{
    if (history_index < careTakerPile->getTailleHistorique() - 1)
    {
        history_index++;
        maPile = &careTakerPile->getMementoPile(history_index).getEtatPile();
        // OpeManager->stockage = careTakerPile->getMementoPile(history_index).getStockage();
    }
}

void Controleur::traiter(const QString &c)
{
    Pile *maPileCopy{maPile->clone()};

    if (estLitProgramme(c))
    {
        Litterale *temp = getLitterale(c);
        maPile->push(temp);
        while (careTakerPile->getTailleHistorique() > history_index + 1)
        {
            careTakerPile->pop();
        }
        history_index++;
        Memento *mementoPile = new Memento(*maPile->clone());
        careTakerPile->addMementoPile(*mementoPile, history_index);
        return;
    }

    // split the string
    QList<QString> listOperande = c.split(QRegExp("[\\s\\n\\r]+"));

    for (int i = 0; i < listOperande.length(); i++)
    {
        if (listOperande[i].toStdString().find_first_not_of(' ') == std::string::npos)
        {
            continue;
        }
        // If operand est un litterale
        if (estOperateur(listOperande[i]))
        {
            Operateur *Ope = getOperateur(listOperande[i]);
            // operateur clear
            if (Ope->getSympole() == "CLEAR")
            {
                Ope->traiter(maPile);
            }

            if (Ope->getArite() == 2)
            {
                if (maPile->taille() < 2)
                {
                    throw CalculatorException("Impossible d'utiliser cette Operateur Binaire");
                }
                // pour des operateur PILE
                if (Ope->getSympole() == "SWAP")
                {
                    Ope->traiter(maPile);
                }
                else if (Ope->getSympole() == "IFT")
                {
                    // depile n operateurs
                    Litterale *lt2 = maPile->top();
                    maPile->pop();
                    Litterale *lt1 = maPile->top();
                    maPile->pop();
                    // l'empilement le resultat
                    if (lt1->getType() == typeLit::ENTIER && lt2->getType() == typeLit::PROG)
                    {
                        LitEntier *test = dynamic_cast<LitEntier *>(lt1);
                        if (test->getValeur() > 0)
                        {
                            const QString &str = lt2->getText().mid(1, lt2->getText().length() - 2);
                            traiter(str);
                        }
                        else
                        {
                            throw CalculatorException("test egale a 0: Abandon des valeur");
                        }
                    }
                    else
                    {
                        throw CalculatorException("Mauvais type pour Condition");
                    }
                }
                else
                {
                    // depile n operateurs
                    Litterale *lt2 = maPile->top();
                    maPile->pop();
                    Litterale *lt1 = maPile->top();
                    maPile->pop();
                    // l'empilement le resultat
                    maPile->push(Ope->traiter(lt1, lt2));
                }
            }

            if (Ope->getArite() == 1)
            {
                if (maPile->taille() < 1)
                {
                    throw CalculatorException("Impossible d'utiliser cette Operateur Unaire");
                }
                // pour des operateur PILE
                if (Ope->getSympole() == "DUP" || Ope->getSympole() == "DROP")
                {
                    Ope->traiter(maPile);
                }
                else
                {
                    // depile n operateurs
                    Litterale *lt1 = maPile->top();
                    maPile->pop();

                    // l'empilement le resultat
                    if (lt1->getValeurNumerique() == nullptr)
                    {
                        const QString &str = lt1->getText().mid(1, lt1->getText().length() - 2);
                        traiter(str);
                    }
                    else
                    {
                        maPile->push(Ope->traiter(lt1));
                    }
                }
            }
        }
        else if (estLitterale(listOperande[i])) // Operande est un Litterale
        {
            // eviter litterale Atom comme Operateur
            if (estLitExpression(listOperande[i]) && estOperateur(listOperande[i].mid(1, listOperande[i].length() - 2)))
            {
                throw CalculatorException("Operateur ne peut pas etre utilise comme Litterale atom");
            }
            // pour autre litterale
            Litterale *temp = getLitterale(listOperande[i]);
            if (temp != nullptr)
            {
                if (estLitAtom(listOperande[i]))
                {
                    LitAtom *atom = dynamic_cast<LitAtom *>(temp);
                    if (atom->getValeur()->getType() == typeLit::PROG)
                    {
                        const QString &st = atom->getValeur()->getText();
                        const QString &suitPro = st.mid(1, st.length() - 2);
                        // std::cout << suitPro.toStdString();
                        traiter(suitPro);
                    }
                    else
                    {
                        maPile->push(atom->getValeur());
                    }
                    // if (atom->getValeurNumerique() != nullptr)
                    // {
                    //     maPile->push(atom->getValeurNumerique());
                    // }
                    // else
                    // {
                    //     maPile->push(atom->getProgramme());

                    //     // QString suiteOperand;
                    //     // suiteOperand = c.mid(1, c.length() - 2);
                    //     // traiter(suiteOperand);
                    // }
                }
                else
                {
                    maPile->push(temp);
                }
            }
            else
            {
                throw CalculatorException("Aucun valeur associe a cette variable");
            }
        }
        else
        {
            throw CalculatorException("Impossible de lire cette expression: Ne respecte pas les regles de la RPN");
        }
    }
    if (listOperande.size() != 0 && (listOperande[0] != "UNDO" && listOperande[0] != "REDO"))
    {
        while (careTakerPile->getTailleHistorique() > history_index + 1)
        {
            careTakerPile->pop();
        }
        history_index++;
        Memento *mementoPile = new Memento(*maPile->clone());
        careTakerPile->addMementoPile(*mementoPile, history_index);
    }
}
