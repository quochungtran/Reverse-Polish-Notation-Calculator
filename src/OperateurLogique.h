#ifndef OpeLogique_h
#define OpeLogique_h
#include <iostream>

#include "Operateur.h"

class OperateurLogique : public Operateur
{
public:
    virtual ~OperateurLogique() = default;
    OperateurLogique(QString s, unsigned int a) : Operateur(s, a) {}
};

//---------Pour OperateurLogique---------

// Operateur Egale
class OperatorEgale : public OperateurLogique
{
public:
    OperatorEgale() : OperateurLogique("==", 2)
    {
    }
    virtual ~OperatorEgale() = default;
    Litterale *traiter(Litterale *l1, Litterale *l2) override;

    Litterale *traiter(Litterale *l1)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    void traiter(Pile *pile)
    {
        throw CalculatorException("Nombre arguments invalides");
    }
};

// Operateur Diff
class OperatorDiff : public OperateurLogique
{
public:
    OperatorDiff() : OperateurLogique("!=", 2)
    {
    }
    virtual ~OperatorDiff() = default;
    Litterale *traiter(Litterale *l1, Litterale *l2) override;

    Litterale *traiter(Litterale *l1)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    void traiter(Pile *pile)
    {
        throw CalculatorException("Nombre arguments invalides");
    }
};

// Operateur Inferieur ou Egale
class OperatorInf_Egal : public OperateurLogique
{
public:
    OperatorInf_Egal() : OperateurLogique("<=", 2)
    {
    }
    virtual ~OperatorInf_Egal() = default;
    Litterale *traiter(Litterale *l1, Litterale *l2) override;

    Litterale *traiter(Litterale *l1)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    void traiter(Pile *pile)
    {
        throw CalculatorException("Nombre arguments invalides");
    }
};

// Operateur Superieur ou Egale
class OperatorSup_Egal : public OperateurLogique
{
public:
    OperatorSup_Egal() : OperateurLogique(">=", 2)
    {
    }
    virtual ~OperatorSup_Egal() = default;
    Litterale *traiter(Litterale *l1, Litterale *l2) override;

    Litterale *traiter(Litterale *l1)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    void traiter(Pile *pile)
    {
        throw CalculatorException("Nombre arguments invalides");
    }
};

// Operateur Superieur
class OperatorSup : public OperateurLogique
{
public:
    OperatorSup() : OperateurLogique(">", 2)
    {
    }
    virtual ~OperatorSup() = default;
    Litterale *traiter(Litterale *l1, Litterale *l2) override;

    Litterale *traiter(Litterale *l1)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    void traiter(Pile *pile)
    {
        throw CalculatorException("Nombre arguments invalides");
    }
};

// Operateur Inferieur
class OperatorInf : public OperateurLogique
{
public:
    OperatorInf() : OperateurLogique("<", 2)
    {
    }
    virtual ~OperatorInf() = default;
    Litterale *traiter(Litterale *l1, Litterale *l2) override;

    Litterale *traiter(Litterale *l1)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    void traiter(Pile *pile)
    {
        throw CalculatorException("Nombre arguments invalides");
    }
};

// Operateur AND
class OperateurAND : public OperateurLogique
{
public:
    OperateurAND() : OperateurLogique("AND", 2)
    {
    }
    virtual ~OperateurAND() = default;
    Litterale *traiter(Litterale *l1, Litterale *l2) override;

    Litterale *traiter(Litterale *l1)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    void traiter(Pile *pile)
    {
        throw CalculatorException("Nombre arguments invalides");
    }
};

//operateur OR
class OperateurOR : public OperateurLogique
{
public:
    OperateurOR() : OperateurLogique("OR", 2) {}
    virtual ~OperateurOR() = default;
    Litterale *traiter(Litterale *l1, Litterale *l2) override;

    Litterale *traiter(Litterale *l1)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    void traiter(Pile *pile)
    {
        throw CalculatorException("Nombre arguments invalides");
    }
};

//Operateur NOT
class OperateurNOT : public OperateurLogique
{
public:
    OperateurNOT() : OperateurLogique("NOT", 1) {}
    virtual ~OperateurNOT() = default;
    Litterale *traiter(Litterale *l1, Litterale *l2)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    Litterale *traiter(Litterale *l1) override;

    void traiter(Pile *pile)
    {
        throw CalculatorException("Nombre arguments invalides");
    }
};

#endif
