#include "LitAtom.h"
#include "LitRationelle.h"
#include "LitReelle.h"
#include "CalculatorException.h"

bool LitAtom::isNull() const
{
    return valeur->isNull();
}

QString LitAtom::getNom() const
{
    return nom;
}

Litterale *LitAtom::getValeur() const
{
    return valeur;
}

typeLit LitAtom::getType() const
{
    return typeLit::Atom;
}

QString LitAtom::getText() const
{
    return nom;
}

LitNumerique *LitAtom::getValeurNumerique()
{
    if (valeur->getType() != typeLit::PROG && valeur->getType() != typeLit::EXP)
        return valeur->getValeurNumerique();
    else
        throw CalculatorException("valeur de Litterale atom  invalide");
}

void LitAtom::setValeur(Litterale *l1)
{
    valeur = l1;
}

void LitAtom::setNom(const QString &c)
{
    nom = c;
}
