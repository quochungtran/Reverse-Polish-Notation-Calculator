#ifndef Controleur_h
#define Controleur_h
#include "OperateurManager.h"
#include "Pile.h"
#include "Stockage.h"
#include "LitProgramme.h"
#include "Memento.h"

class Controleur
{
    Pile *maPile;
    OperateurManager *OpeManager;
    CareTakerPile *careTakerPile;
    unsigned int history_index;

public:
    Controleur(OperateurManager &m, Pile *v) : OpeManager(&m), maPile(v)
    {
        history_index = 0;
        Memento *memento = new Memento{*maPile};
        careTakerPile = new CareTakerPile{};
        careTakerPile->addMementoPile(*memento, history_index);
    }
    Controleur() {}
    bool estOperateur(const QString &c);
    Operateur *getOperateur(const QString &c);
    Pile *getPile() { return maPile; }

    bool estLitEntier(const QString &c);
    bool estLitRattionelle(const QString &c);
    bool estLitReelle(const QString &c);
    bool estLitterale(const QString &c);
    bool estLitExpression(const QString &c);
    bool estLitAtom(const QString &c);
    bool estLitProgramme(const QString &c);

    Litterale *getLitterale(const QString &c);

    void traiter(const QString &c);
    void traiterLitProgramme(const QString &c);

    void chargerPrecedent();
    void chargerSuivant();

    // bool estLitterale(const QString &c);

    // estUnnombre
};

#endif
