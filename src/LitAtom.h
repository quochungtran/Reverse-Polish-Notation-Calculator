#ifndef LitAtom_h
#define LitAtom_h
#include <iostream>
#include "Litterale.h"
#include <string>
#include "LitProgramme.h"
class LitAtom : public Litterale
{
private:
    QString nom;
    Litterale *valeur;
    
public:
    LitAtom(const QString &nom1, Litterale *val = nullptr)
        : nom(nom1), valeur(val)
    {
        if (valeur->getType() == typeLit::Atom || valeur->getType() == typeLit::EXP)
            throw CalculatorException("type Litterale invalide");
    }
    bool isNull() const { return valeur->isNull(); }
    //accesseur en lecture
    QString getNom() const { return nom; }
    Litterale *getValeur() const { return valeur; }
    typeLit getType() const override { return typeLit::Atom; }
    QString getText() { return nom; }
    // This function permet de tirer le pointeur Numerique pour des classes contient la valeur Numerique
    virtual LitNumerique *getValeurNumerique() override
    {
        if (valeur->getType() != typeLit::PROG && valeur->getType() != typeLit::EXP)
            return valeur->getValeurNumerique();
        else
            throw CalculatorException("valeur de Litterale atom  invalide");
    }

    LitProgramme *getProgramme()
    {
        if (valeur->getType() == typeLit::PROG)
        {
            return new LitProgramme(valeur->getText());
        }
    }

    void setValeur(Litterale *l1) { valeur = l1; }
    void setNom(const QString &c) { nom = c; }
};

#endif