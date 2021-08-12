#ifndef LitAtom_h
#define LitAtom_h
#include <iostream>
#include <string>
#include "Litterale.h"
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

    bool                    isNull()            const;
    //accesseur en lecture      
    QString                 getNom()            const;
    Litterale *             getValeur()         const;
    typeLit                 getType()           const override;
    QString                 getText();
    // This function permet de tirer le pointeur Numerique pour des classes contient la valeur Numerique
    virtual LitNumerique *getValeurNumerique()  override;

    LitProgramme *getProgramme();

    void setValeur(Litterale *l1);
    void setNom   (const QString &c); 
};

#endif