#ifndef LitRationelle_h
#define LitRationelle_h
#include <iostream>
#include "LitNumerique.h"
#include "LitEntier.h"
class LitRationelle : public LitNumerique
{
private:
    int numerateur;
    unsigned int denominateur;

public:
    LitRationelle(int num = 0, unsigned int den = 1)
        : numerateur(num), denominateur(den)
    {
        simplifier();
    }
    ~LitRationelle() {}
    bool isNull() const;
    bool isPos() const;

    int getNum() const { return numerateur; }
    unsigned int getDen() const { return denominateur; }
    typeLit getType() const { return typeLit::RAT; }
    LitNumerique *convertToNumrique(typeLit type) override;

    void simplifier();
    QString getText() ;
    // ajouter virtual surchage operator
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

    // LitNumerique *getValeurNumerique() { return this; }
    // LitEntier *getValeurEntier() { return new LitEntier(numerateur); }
};
#endif