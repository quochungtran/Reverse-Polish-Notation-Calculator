#ifndef LitExpression_h
#define LitExpression_h
#include <iostream>
#include "Litterale.h"
#include <string>

class LitExpression : public Litterale
{
private:
    QString nom;

public:
    LitExpression(const QString &nom1)
        : nom(nom1)
    {
    }
    ~LitExpression() {}

    bool         isNull()     const;

    // pour tirer le nom de Litterale ATOM
    
    QString      getNom()     const;         
    
    // tirer le type de Litterale
    typeLit      getType()    const override;

    // tirer le text pour afficher dans le pile
    QString      getText();                
    
    // This function permet de tirer le pointeur Numerique pour des classes contient la valeur Numerique
    virtual      LitNumerique *getValeurNumerique() override;
    
    void setNom(const QString &c);
};

#endif