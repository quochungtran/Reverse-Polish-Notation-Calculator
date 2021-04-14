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
    bool isNull() const;
    //accesseur en lecture

    // pour tirer le nom de Litterale ATOM
    QString getNom() const { return nom.mid(1, nom.length() - 2); }
    // tirer le type de Litterale
    typeLit getType() const override { return typeLit::EXP; }
    // tirer le text pour afficher dans le pile
    QString getText() { return nom; }
    // This function permet de tirer le pointeur Numerique pour des classes contient la valeur Numerique
    virtual LitNumerique *getValeurNumerique() override
    {
        return nullptr;
    }
    void setNom(const QString &c) { nom = c; }
};

#endif