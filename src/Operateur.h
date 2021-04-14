#ifndef Operator_h
#define Operator_h
#include <iostream>
#include <string>
#include "LitEntier.h"
#include "LitRationelle.h"
#include "LitReelle.h"
#include "LitExpression.h"
#include "LitProgramme.h"

#include "CalculatorException.h"
#include "Pile.h"
#include "LitAtom.h"
#include "Stockage.h"
// Class abstract OPERATOR
class Operateur
{
private:
    QString sympole;
    unsigned int arite;

public:
    Operateur(QString s, unsigned int a = 0)
        : sympole(s), arite(a)
    {
    }
    virtual ~Operateur() = default;
    //accesseur
    QString getSympole() const { return sympole; }
    unsigned int getArite() const { return arite; }
    //methode commun , pure virtual
    virtual Litterale *traiter(Litterale *l1, Litterale *l2) = 0;
    virtual Litterale *traiter(Litterale *l1) = 0;
    virtual void traiter(Pile *pile) = 0;
};
// Operateur STO
class OperateurSTO : public Operateur
{
private:
    Stockage *stockage;

public:
    OperateurSTO(Stockage *s) : Operateur("STO", 2)
    {
        this->stockage = s;
    }
    virtual ~OperateurSTO() = default;
    ///////////////////////
    Litterale *traiter(Litterale *l1, Litterale *l2) override;
    ///////////////////////

    Litterale *traiter(Litterale *l1)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    void traiter(Pile *pile)
    {
        throw CalculatorException("Nombre arguments invalides");
    }
};
// Operateur EVAL
class OperateurEVAL : public Operateur
{
private:
    Stockage *stockage;

public:
    OperateurEVAL(Stockage *s) : Operateur("EVAL", 1)
    {
        this->stockage = s;
    }
    virtual ~OperateurEVAL() = default;
    ///////////////////////
    Litterale *traiter(Litterale *l1) override;
    ///////////////////////

    Litterale *traiter(Litterale *l1, Litterale *l2)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    void traiter(Pile *pile)
    {
        throw CalculatorException("Nombre arguments invalides");
    }
};
#endif
