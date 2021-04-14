#ifndef LitReelle_h
#define LitReelle_h
#include <iostream>
#include "LitNumerique.h"

class LitReelle : public LitNumerique
{
private:
    double valeur;
    int PartieEntiere;
    double PartieDecimale;

public:
    LitReelle(double v)
        : valeur(v), PartieEntiere(static_cast<int>(v)), PartieDecimale(v - PartieEntiere)
    {
    }

    bool isNull() const;
    bool isPos() const;
    //accesseur en lecture
    double getValeur() const { return valeur; }
    double getPartieDecimale() const { return PartieDecimale; }
    int getPartieEntier() const { return PartieEntiere; }
    typeLit getType() const { return typeLit::REELLE; }
    LitNumerique *convertToNumrique(typeLit type) override;
    // Des operateurs
    // ajouter virtual surchage operator
    LitNumerique *operator+(LitNumerique &l) override;
    LitNumerique *operator-(LitNumerique &l) override;
    LitNumerique *operator*(LitNumerique &l) override;
    LitNumerique *operator/(LitNumerique &l) override;
    LitNumerique *POW(LitNumerique &l) override;


    bool operator==(LitNumerique &l) override;
    bool operator!=(LitNumerique &l) override;
    bool operator>=(LitNumerique &l) override;
    bool operator<=(LitNumerique &l) override;
    bool operator>(LitNumerique &l) override;
    bool operator<(LitNumerique &l) override;

    LitNumerique *SIN() override;
    LitNumerique *COS() override;
    LitNumerique *TAN() override;
    LitNumerique *ARCTAN() override;
    LitNumerique *ARCCOS() override;
    LitNumerique *ARCSIN() override;
    LitNumerique *SQRT() override;
    LitNumerique *EXP() override;
    LitNumerique *LN() override;
    LitNumerique *NUM() override;
    LitNumerique *DEN() override;
    // LitNumerique *POW(LitNumerique &l) override;

    QString getText() ;
    // LitNumerique *getValeurNumerique() { return this; }
};
#endif