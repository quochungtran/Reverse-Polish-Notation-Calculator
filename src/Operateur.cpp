#include "OperateurLogique.h"
#include "OperateurPile.h"
#include "OperateurNumerique.h"
#include "Operateur.h"
#include "OperateurConditionnel.h"

/// OPERATEUR NUMERIQUES
Litterale *OperatorAddition::traiter(Litterale *l1, Litterale *l2)
{
    // LitNumerique *litNum1 = dynamic_cast<LitNumerique *>(l1);
    // LitNumerique *litNum2 = dynamic_cast<LitNumerique *>(l2);

    if (l1->getType() == typeLit::PROG || l2->getType() == typeLit::PROG)
    {
        throw CalculatorException("Type Litterale est invalide");
    }

    // Pour Operator Numerique on utilise la function getValeurNumerique() pour
    // prendre la valeur numerique de n'import que quel pointeur de Litterale
    // sans utilisant dynamique_cast
    LitNumerique *resultat = *l1->getValeurNumerique() + *l2->getValeurNumerique();
    return resultat;
}

Litterale *OperatorSoutraction::traiter(Litterale *l1, Litterale *l2)
{
    // LitNumerique *litNum1 = dynamic_cast<LitNumerique *>(l1);
    // LitNumerique *litNum2 = dynamic_cast<LitNumerique *>(l2);

    if (l1->getType() == typeLit::PROG || l2->getType() == typeLit::PROG)
    {
        throw CalculatorException("Type Litterale est invalide");
    }

    // Pour Operator Numerique on utilise la function getValeurNumerique() pour
    // prendre la valeur numerique de n'import que quel pointeur de Litterale
    // sans utilisant dynamique_cast
    LitNumerique *resultat = *l1->getValeurNumerique() - *l2->getValeurNumerique();
    return resultat;
}

Litterale *OperatorMultiplication::traiter(Litterale *l1, Litterale *l2)
{
    // LitNumerique *litNum1 = dynamic_cast<LitNumerique *>(l1);
    // LitNumerique *litNum2 = dynamic_cast<LitNumerique *>(l2);

    if (l1->getType() == typeLit::PROG || l2->getType() == typeLit::PROG)
    {
        throw CalculatorException("Type Litterale est invalide");
    }

    // Pour Operator Numerique on utilise la function getValeurNumerique() pour
    // prendre la valeur numerique de n'import que quel pointeur de Litterale
    // sans utilisant dynamique_cast
    LitNumerique *resultat = *l1->getValeurNumerique() * *l2->getValeurNumerique();
    return resultat;
}

Litterale *OperatorDivision::traiter(Litterale *l1, Litterale *l2)
{
    // LitNumerique *litNum1 = dynamic_cast<LitNumerique *>(l1);
    // LitNumerique *litNum2 = dynamic_cast<LitNumerique *>(l2);

    if (l1->getType() == typeLit::PROG || l2->getType() == typeLit::PROG)
    {
        throw CalculatorException("Type Litterale est invalide");
    }

    // Pour Operator Numerique on utilise la function getValeurNumerique() pour
    // prendre la valeur numerique de n'import que quel pointeur de Litterale
    // sans utilisant dynamique_cast
    LitNumerique *resultat = *l1->getValeurNumerique() / *l2->getValeurNumerique();
    return resultat;
}

// Operateur DIV
Litterale *OperatorDIV::traiter(Litterale *l1, Litterale *l2)
{
    // LitNumerique *litNum1 = dynamic_cast<LitNumerique *>(l1);
    // LitNumerique *litNum2 = dynamic_cast<LitNumerique *>(l2);

    if (l1->getType() == typeLit::ENTIER && l2->getType() == typeLit::ENTIER)
    {
        LitEntier *en1 = dynamic_cast<LitEntier *>(l1);
        LitEntier *en2 = dynamic_cast<LitEntier *>(l2);
        if (en1 != nullptr && en2 != nullptr)
        {
            if (en1->isNull())
                throw CalculatorException("Impossible DIV par 0");
            LitEntier *resultat = new LitEntier(en1->getValeur() / en2->getValeur());
            return resultat;
        }
    }
    else
    {
        throw CalculatorException("Type Litterale est invalide");
    }
}

// Operateur MOD
Litterale *OperatorMOD::traiter(Litterale *l1, Litterale *l2)
{
    if (l1->getType() == typeLit::ENTIER && l2->getType() == typeLit::ENTIER)
    {
        LitEntier *en1 = dynamic_cast<LitEntier *>(l1);
        LitEntier *en2 = dynamic_cast<LitEntier *>(l2);
        if (en1 != nullptr && en2 != nullptr)
        {
            if (en1->isNull())
                throw CalculatorException("Impossible MOD par 0");
            LitEntier *resultat = new LitEntier(en1->getValeur() % en2->getValeur());
            return resultat;
        }
    }
    else
    {
        throw CalculatorException("Type Litterale est invalide");
    }
}

Litterale *OperateurNEG::traiter(Litterale *l1)
{
    if (l1->getType() != typeLit::PROG)
    {
        LitNumerique *zeros = new LitEntier(0);
        LitNumerique *litNum = l1->getValeurNumerique();
        LitNumerique *resultat = (*zeros - *litNum);
        return resultat;
    }
    else
    {
        throw CalculatorException("Type Litterale est invalide");
    }
}
//Operateur SIN
Litterale *OperateurSIN::traiter(Litterale *l1)
{
    if (l1->getType() != typeLit::PROG)
    {
        LitNumerique *res = l1->getValeurNumerique()->SIN();
        return res;
    }
    else
    {
        throw CalculatorException("Type Litterale est invalide");
    }
}

//Operateur COS
Litterale *OperateurCOS::traiter(Litterale *l1)
{
    if (l1->getType() != typeLit::PROG)
    {
        LitNumerique *res = l1->getValeurNumerique()->COS();
        return res;
    }
    else
    {
        throw CalculatorException("Type Litterale est invalide");
    }
}

//Operateur TAN
Litterale *OperateurTAN::traiter(Litterale *l1)
{
    if (l1->getType() != typeLit::PROG)
    {
        LitNumerique *res = l1->getValeurNumerique()->TAN();
        return res;
    }
    else
    {
        throw CalculatorException("Type Litterale est invalide");
    }
}

//Operateur ARCTAN
Litterale *OperateurARCTAN::traiter(Litterale *l1)
{
    if (l1->getType() != typeLit::PROG)
    {
        LitNumerique *res = l1->getValeurNumerique()->ARCTAN();
        return res;
    }
    else
    {
        throw CalculatorException("Type Litterale est invalide");
    }
}
//Operateur ARCSIN
Litterale *OperateurARCSIN::traiter(Litterale *l1)
{
    if (l1->getType() != typeLit::PROG)
    {
        LitNumerique *res = l1->getValeurNumerique()->ARCSIN();
        if (res->getText() == "nan")
            throw CalculatorException("Arcsin possible uniquement avec valeur entre -1 et 1 : il faut changer la valeur");
        return res;
    }
    else
    {
        throw CalculatorException("Type Litterale est invalide");
    }
}

//Operateur ARCCCOS
Litterale *OperateurARCCOS::traiter(Litterale *l1)
{
    if (l1->getType() != typeLit::PROG)
    {
        LitNumerique *res = l1->getValeurNumerique()->ARCCOS();
        if (res->getText() == "nan")
            throw CalculatorException("Arcsin possible uniquement avec valeur entre -1 et 1 : il faut changer la valeur");
        return res;
    }
    else
    {
        throw CalculatorException("Type Litterale est invalide");
    }
}

//Operateur SQRT
Litterale *OperateurSQRT::traiter(Litterale *l1)
{
    if (l1->getType() != typeLit::PROG)
    {
        LitNumerique *res = l1->getValeurNumerique()->SQRT();
        return res;
    }
    else
    {
        throw CalculatorException("Type Litterale est invalide");
    }
}

//Operateur EXP
Litterale *OperateurEXP::traiter(Litterale *l1)
{
    if (l1->getType() != typeLit::PROG)
    {
        LitNumerique *res = l1->getValeurNumerique()->EXP();
        return res;
    }
    else
    {
        throw CalculatorException("Type Litterale est invalide");
    }
}
//Operateur LN
Litterale *OperateurLN::traiter(Litterale *l1)
{
    if (l1->getType() != typeLit::PROG)
    {
        LitNumerique *res = l1->getValeurNumerique()->LN();
        return res;
    }
    else
    {
        throw CalculatorException("Type Litterale est invalide");
    }
}

Litterale *OperateurPOW::traiter(Litterale *l1, Litterale *l2)
{
    if (l1->getType() == typeLit::PROG || l2->getType() == typeLit::PROG)
    {
        throw CalculatorException("Type Litterale est invalide");
    }

    // Pour Operator Numerique on utilise la function getValeurNumerique() pour
    // prendre la valeur numerique de n'import que quel pointeur de Litterale
    // sans utilisant dynamique_cast
    LitNumerique *resultat = l1->getValeurNumerique()->POW(*l2->getValeurNumerique());
    return resultat;
}

//----------------------------------------------------------
/// OPERATEUR LOGIQUE
// Operateur Egale
Litterale *OperatorEgale::traiter(Litterale *l1, Litterale *l2)
{

    if (l1->getType() == typeLit::PROG || l2->getType() == typeLit::PROG)
    {
        throw CalculatorException("Type Litterale est invalide");
    }

    bool check = *l1->getValeurNumerique() == *l2->getValeurNumerique();
    LitNumerique *resultat = new LitEntier(check);
    return resultat;
}

// Operateur Diff
Litterale *OperatorDiff::traiter(Litterale *l1, Litterale *l2)
{

    if (l1->getType() == typeLit::PROG || l2->getType() == typeLit::PROG)
    {
        throw CalculatorException("Type Litterale est invalide");
    }

    bool check = *l1->getValeurNumerique() != *l2->getValeurNumerique();
    LitNumerique *resultat = new LitEntier(check);
    return resultat;
}

// Operateur Inf ou Egal
Litterale *OperatorInf_Egal::traiter(Litterale *l1, Litterale *l2)
{

    if (l1->getType() == typeLit::PROG || l2->getType() == typeLit::PROG)
    {
        throw CalculatorException("Type Litterale est invalide");
    }

    bool check = *l1->getValeurNumerique() <= *l2->getValeurNumerique();
    LitNumerique *resultat = new LitEntier(check);
    return resultat;
}

// Operateur Sup ou Egal
Litterale *OperatorSup_Egal::traiter(Litterale *l1, Litterale *l2)
{

    if (l1->getType() == typeLit::PROG || l2->getType() == typeLit::PROG)
    {
        throw CalculatorException("Type Litterale est invalide");
    }

    bool check = *l1->getValeurNumerique() >= *l2->getValeurNumerique();
    LitNumerique *resultat = new LitEntier(check);
    return resultat;
}

// Operateur Sup
Litterale *OperatorSup::traiter(Litterale *l1, Litterale *l2)
{

    if (l1->getType() == typeLit::PROG || l2->getType() == typeLit::PROG)
    {
        throw CalculatorException("Type Litterale est invalide");
    }

    bool check = *l1->getValeurNumerique() > *l2->getValeurNumerique();
    LitNumerique *resultat = new LitEntier(check);
    return resultat;
}

// Operateur Inf
Litterale *OperatorInf::traiter(Litterale *l1, Litterale *l2)
{

    if (l1->getType() == typeLit::PROG || l2->getType() == typeLit::PROG)
    {
        throw CalculatorException("Type Litterale est invalide");
    }

    bool check = *l1->getValeurNumerique() < *l2->getValeurNumerique();
    LitNumerique *resultat = new LitEntier(check);
    return resultat;
}

//-------------------------------------------------------------
//---------------------- OperatorUnaire ----------------------
//-------------------------------------------------------------

// Ope DUP
void OperateurDUP::traiter(Pile *pile)
{
    Litterale *lit = pile->top();
    pile->push(lit);
}
// Ope DROP
void OperateurDROP::traiter(Pile *pile)
{
    pile->pop();
}
// Ope SWAP
void OperateurSWAP::traiter(Pile *pile)
{
    Litterale *l1 = pile->top();
    pile->pop();
    Litterale *l2 = pile->top();
    pile->pop();
    pile->push(l1);
    pile->push(l2);
}
// Ope CLEAR
void OperateurCLEAR::traiter(Pile *pile)
{
    pile->vide();
}

// Ope AND

Litterale *OperateurAND::traiter(Litterale *l1, Litterale *l2)
{
    if (l1->getType() == typeLit::PROG || l2->getType() == typeLit::PROG)
    {
        throw CalculatorException("Type Litterale est invalide");
    }
    if (!l1->getValeurNumerique()->isNull() && !l2->getValeurNumerique()->isNull())
    {
        return new LitEntier(1);
    }
    else
    {
        return new LitEntier(0);
    }
}

// Ope OR
Litterale *OperateurOR::traiter(Litterale *l1, Litterale *l2)
{
    if (l1->getType() == typeLit::PROG || l2->getType() == typeLit::PROG)
    {
        throw CalculatorException("type litterale invalide");
    }
    if ((l1->getValeurNumerique()->isNull() && !l2->getValeurNumerique()->isNull()) || (!l1->getValeurNumerique()->isNull() && l2->getValeurNumerique()->isNull()) || (!l1->getValeurNumerique()->isNull() && !l2->getValeurNumerique()->isNull()))
    {
        return new LitEntier(1);
    }
    else
    {
        return new LitEntier(0);
    }
}

// Ope NOT

Litterale *OperateurNOT::traiter(Litterale *l1)
{
    if (l1->getValeurNumerique()->isNull())
    {
        return new LitEntier(1);
    }
    else
    {
        return new LitEntier(0);
    }
}
// OPe NUM
Litterale *OperateurNUM::traiter(Litterale *l1)
{
    if (l1->getType() == typeLit::ENTIER || l1->getType() == typeLit::RAT)
    {
        return l1->getValeurNumerique()->NUM();
    }
    else
    {
        throw CalculatorException("Recuperation numerateur impossible, mauvais type de Litterale, possible seulement pour Rationelle et Reelle ");
    }
}

// OPe DEN
Litterale *OperateurDEN::traiter(Litterale *l1)
{
    if (l1->getType() == typeLit::ENTIER || l1->getType() == typeLit::RAT)
    {
        return l1->getValeurNumerique()->DEN();
    }
    else
    {
        throw CalculatorException("Recuperation denominateur impossible, mauvais type de Litterale, possible seulement pour Rationelle et Reelle ");
    }
}

// OPe STO

Litterale *OperateurSTO::traiter(Litterale *l1, Litterale *l2)
{

    if (l2->getType() != typeLit::EXP || l1->getType() == typeLit::EXP && l1->getType() == typeLit::Atom)
    {
        throw CalculatorException("Invalide type Litterale");
    }

    LitExpression *exp_from_l2 = dynamic_cast<LitExpression *>(l2);

    LitAtom *new_atom = stockage->getLitAtom(exp_from_l2->getNom());
    if (new_atom == nullptr)
    {
        if (l1->getValeurNumerique() == nullptr)
        {
            const QString &text = l1->getText();
            LitProgramme *litPro_from_l1 = new LitProgramme(text);
            new_atom = new LitAtom(exp_from_l2->getNom(), litPro_from_l1);
        }
        else
        {
            new_atom = new LitAtom(exp_from_l2->getNom(), l1->getValeurNumerique());
        }
        stockage->stocker(new_atom->getNom(), new_atom);
    }
    else
    {
        if (l1->getValeurNumerique() == nullptr)
        {
            const QString &text = l1->getText();
            LitProgramme *litPro_from_l1 = new LitProgramme(text);
            new_atom->setValeur(litPro_from_l1);
        }
        else
        {
            new_atom->setValeur(l1->getValeurNumerique());
        }
    }
    return new_atom;
}

// Ope EVAL

Litterale *OperateurEVAL::traiter(Litterale *l1)
{
    if (l1->getType() == typeLit::EXP)
    {
        LitExpression *exp_from_l1 = dynamic_cast<LitExpression *>(l1);
        LitAtom *new_atom = stockage->getLitAtom(exp_from_l1->getNom());
        std::cout << new_atom->getText().toStdString();
        // std::cout <<  exp_from_l1->getNom().toStdString();
        // std::cout << (new_atom->getValeurNumerique() == nullptr);
        if (new_atom == nullptr)
        {
            throw CalculatorException("Aucun valeur associe a cette variable");
        }
        else
        {
            if (new_atom->getValeurNumerique() != nullptr)
            {
                return new_atom->getValeurNumerique();
            }
        }
    }
    else
    {
        throw CalculatorException("Evaluation impossible: necessesite litterale expression");
    }
}
