#ifndef LitNumerique_h
#define LitNumerique_h

#include <iostream>
#include <functional>
#include "LitNumber.h"
#include <cmath> // std::cos(double)

class LitNumerique;

class LitNumerique : public LitNumber
{
public:
    ~LitNumerique() {}
    // virtual LitteralejkG &simplification() = 0;
    virtual bool isNull() const = 0;
    virtual bool isPos() const = 0;
    virtual typeLit getType() const = 0;
    // This function permet de tirer le pointeur Numerique pour des classes contient la valeur Numerique
    virtual LitNumerique *getValeurNumerique() override { return this; }
    // ajouter virtual surchage operator
    // Le but c'est convertir 2 operands vers le type commun en utilisant static_cast
    typeLit typeMax(Litterale &l);

    virtual LitNumerique *operator+(LitNumerique &l);
    virtual LitNumerique *operator-(LitNumerique &l);
    virtual LitNumerique *operator*(LitNumerique &l);
    virtual LitNumerique *operator/(LitNumerique &l);
    virtual LitNumerique *POW(LitNumerique &l);
    virtual bool operator==(LitNumerique &l);
    virtual bool operator!=(LitNumerique &l);
    virtual bool operator>=(LitNumerique &l);
    virtual bool operator<=(LitNumerique &l);
    virtual bool operator>(LitNumerique &l);
    virtual bool operator<(LitNumerique &l);

    virtual LitNumerique *SIN() = 0;
    virtual LitNumerique *COS() = 0;
    virtual LitNumerique *TAN() = 0;
    virtual LitNumerique *ARCTAN() = 0;
    virtual LitNumerique *ARCCOS() = 0;
    virtual LitNumerique *ARCSIN() = 0;
    virtual LitNumerique *SQRT() = 0;
    virtual LitNumerique *EXP() = 0;
    virtual LitNumerique *LN() = 0;
    virtual LitNumerique *NUM() = 0;
    virtual LitNumerique *DEN() = 0;
    // virtual LitNumerique *POW(LitNumerique &l) = 0;

    virtual LitNumerique *convertToNumrique(typeLit type) = 0;
    virtual QString getText() = 0;
};

#endif