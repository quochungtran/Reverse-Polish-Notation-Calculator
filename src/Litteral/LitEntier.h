#ifndef LitEntier_h
#define LitEntier_h
#include <iostream>
#include "LitNumerique.h"
#include "LitReelle.h"
class Entier;
class LitEntier : public LitNumerique
{
private:
    int valeur;

public:
    explicit LitEntier(int val)
        : valeur(val)
    {
    }
    ~LitEntier() {}

    bool         isNull()                             const;
    bool         isPos()                              const;
    typeLit      getType()                            const override ;
          
    int          getValeur()                          const;

    QString      getText();

    LitNumerique *convertToNumrique(typeLit type)     override;
    // Des operateurs
    // ajouter virtual surchage operator
    LitNumerique*     operator+(LitNumerique &l)      override;
    LitNumerique*     operator-(LitNumerique &l)      override;
    LitNumerique*     operator*(LitNumerique &l)      override;
    LitNumerique*     operator/(LitNumerique &l)      override;
    LitNumerique*     POW      (LitNumerique &l)      override;
 
    bool              operator==(LitNumerique &l)     override;
    bool              operator!=(LitNumerique &l)     override;
    bool              operator>=(LitNumerique &l)     override;
    bool              operator<=(LitNumerique &l)     override;
    bool              operator> (LitNumerique &l)     override;
    bool              operator< (LitNumerique &l)     override;

    LitNumerique*     SIN()                           override;
    LitNumerique*     COS()                           override;
    LitNumerique*     TAN()                           override;
    LitNumerique*     ARCTAN()                        override;
    LitNumerique*     ARCCOS()                        override;
    LitNumerique*     ARCSIN()                        override;
    LitNumerique*     SQRT()                          override;
    LitNumerique*     EXP()                           override;
    LitNumerique*     LN()                            override;
    LitNumerique*     NUM()                           override;
    LitNumerique*     DEN()                           override;
    // LitNumerique *POW(LitNumerique &l) override;

    // LitNumerique *getValeurNumerique() { return this; }
};

#endif