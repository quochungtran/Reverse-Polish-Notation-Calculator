#ifndef OpeNumerique_h
#define OpeNumerique_h
#include <iostream>
#include <cmath>
#include "Operateur.h"

class OperateurNumerique : public Operateur
{
public:
    virtual ~OperateurNumerique() = default;
    OperateurNumerique(QString s, unsigned int a) : Operateur(s, a) {}
};

//---------Pour Operateur Numerique---------
// Operateur Addition
class OperatorAddition : public OperateurNumerique
{
public:
    OperatorAddition() : OperateurNumerique("+", 2)
    {
    }
    virtual ~OperatorAddition() = default;
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

// Operateur Soutraction
class OperatorSoutraction : public OperateurNumerique
{
public:
    OperatorSoutraction() : OperateurNumerique("-", 2)
    {
    }
    virtual ~OperatorSoutraction() = default;
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

// Operateur Multiplication
class OperatorMultiplication : public OperateurNumerique
{
public:
    OperatorMultiplication() : OperateurNumerique("*", 2)
    {
    }
    virtual ~OperatorMultiplication() = default;
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

// Operateur Division
class OperatorDivision : public OperateurNumerique
{
public:
    OperatorDivision() : OperateurNumerique("/", 2)
    {
    }
    virtual ~OperatorDivision() = default;
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

// Operateur Division Entier (DIV)
class OperatorDIV : public OperateurNumerique
{
public:
    OperatorDIV() : OperateurNumerique("DIV", 2)
    {
    }
    virtual ~OperatorDIV() = default;
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

// Operateur MOD
class OperatorMOD : public OperateurNumerique
{
public:
    OperatorMOD() : OperateurNumerique("MOD", 2)
    {
    }
    virtual ~OperatorMOD() = default;
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

// Operateur NEG
class OperateurNEG : public OperateurNumerique
{
public:
    OperateurNEG() : OperateurNumerique("NEG", 1)
    {
    }
    Litterale *traiter(Litterale *l1) override;

    Litterale *traiter(Litterale *l1, Litterale *l2)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    void traiter(Pile *pile)
    {
        throw CalculatorException("Nombre arguments invalides");
    }
};

//Operateur SIN
class OperateurSIN : public OperateurLogique
{
public:
    OperateurSIN() : OperateurLogique("SIN", 1) {}
    virtual ~OperateurSIN() = default;
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

//Operateur COS
class OperateurCOS : public OperateurLogique
{
public:
    OperateurCOS() : OperateurLogique("COS", 1) {}
    virtual ~OperateurCOS() = default;
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

//Operateur TAN
class OperateurTAN : public OperateurLogique
{
public:
    OperateurTAN() : OperateurLogique("TAN", 1) {}
    virtual ~OperateurTAN() = default;
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

//Operateur ARCSIN
class OperateurARCSIN : public OperateurLogique
{
public:
    OperateurARCSIN() : OperateurLogique("ARCSIN", 1) {}
    virtual ~OperateurARCSIN() = default;
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

//Operateur ARCCOS
class OperateurARCCOS : public OperateurLogique
{
public:
    OperateurARCCOS() : OperateurLogique("ARCCOS", 1) {}
    virtual ~OperateurARCCOS() = default;
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

//Operateur ARCTAN
class OperateurARCTAN : public OperateurLogique
{
public:
    OperateurARCTAN() : OperateurLogique("ARCTAN", 1) {}
    virtual ~OperateurARCTAN() = default;
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

//Operateur ARCNUM
class OperateurNUM : public OperateurLogique
{
public:
    OperateurNUM() : OperateurLogique("NUM", 1) {}
    virtual ~OperateurNUM() = default;
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

//Operateur DEN
class OperateurDEN : public OperateurLogique
{
public:
    OperateurDEN() : OperateurLogique("DEN", 1) {}
    virtual ~OperateurDEN() = default;
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

//Operateur EXP
class OperateurEXP : public OperateurLogique
{
public:
    OperateurEXP() : OperateurLogique("EXP", 1) {}
    virtual ~OperateurEXP() = default;
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

//Operateur LN
class OperateurLN : public OperateurLogique
{
public:
    OperateurLN() : OperateurLogique("LN", 1) {}
    virtual ~OperateurLN() = default;
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

//Operateur SQRT
class OperateurSQRT : public OperateurLogique
{
public:
    OperateurSQRT() : OperateurLogique("SQRT", 1) {}
    virtual ~OperateurSQRT() = default;
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

//Operateur POW
class OperateurPOW : public OperateurLogique
{
public:
    OperateurPOW() : OperateurLogique("POW", 2) {}
    virtual ~OperateurPOW() = default;

    Litterale *traiter(Litterale *l1)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    Litterale *traiter(Litterale *l1, Litterale *l2) override;

    void traiter(Pile *pile)
    {
        throw CalculatorException("Nombre arguments invalides");
    }
};

#endif
