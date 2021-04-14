#ifndef OpePile_h
#define OpePile_h
#include <iostream>
#include <QString>
#include "Operateur.h"
class OperateurPile : public Operateur
{
public:
    virtual ~OperateurPile() = default;
    OperateurPile(QString s, unsigned int a = 0) : Operateur(s, a) {}
};

//...........................

// Operateur DUP
class OperateurDUP : public OperateurPile
{
public:
    OperateurDUP() : OperateurPile("DUP", 1)
    {
    }

    Litterale *traiter(Litterale *l1, Litterale *l2)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    Litterale *traiter(Litterale *l1)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    void traiter(Pile *pile) override;
};

// Operateur DROP
class OperateurDROP : public OperateurPile
{
public:
    OperateurDROP() : OperateurPile("DROP", 1)
    {
    }

    Litterale *traiter(Litterale *l1, Litterale *l2)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    Litterale *traiter(Litterale *l1)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    void traiter(Pile *pile) override;
};

class OperateurSWAP : public OperateurPile
{
public:
    OperateurSWAP() : OperateurPile("SWAP", 2)
    {
    }

    Litterale *traiter(Litterale *l1)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    Litterale *traiter(Litterale *l1, Litterale *l2)
    {
        throw CalculatorException("Nombre arguments invalides");
    }
    void traiter(Pile *pile) override;
};

class OperateurCLEAR : public OperateurPile
{
public:
    OperateurCLEAR() : OperateurPile("CLEAR",0)
    {
    }
    // virtual ~OperateurCLEAR() = default;

    LitNumerique *traiter(Litterale *l1, Litterale *l2)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    Litterale *traiter(Litterale *l1)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    void traiter(Pile *pile) override;
};
#endif