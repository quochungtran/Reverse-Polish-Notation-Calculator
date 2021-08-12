#include "LitExpression.h"

bool LitExpression::isNull() const
{
   return (nom == "");
}

QString LitExpression::getNom() const
{
   return nom.mid(1, nom.length() - 2);
}

typeLit LitExpression::getType() const 
{
   return typeLit::EXP;
}

QString LitExpression::getText()
{
   return nom;
}

LitNumerique *LitExpression::getValeurNumerique() 
{
   return nullptr;
}

void LitExpression::setNom(const QString &c)
{
   nom = c;
}
