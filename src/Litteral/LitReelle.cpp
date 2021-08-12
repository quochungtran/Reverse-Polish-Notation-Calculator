#include "LitEntier.h"
#include "LitRationelle.h"
#include "LitReelle.h"
#include "CalculatorException.h"
bool LitReelle::isNull() const
{
    return (valeur == 0);
}

bool LitReelle::isPos() const
{
    return (valeur > 0);
}

QString LitReelle::getText()
{
    return QString::number(valeur);
}

LitNumerique *LitReelle::convertToNumrique(typeLit type)
{
    return this;
}

double LitReelle::getValeur() const
{
    return valeur;
}

double LitReelle::getPartieDecimale() const
{
    return PartieDecimale;
}

int LitReelle::getPartieEntier() const
{
    return PartieEntiere;
}

typeLit LitReelle::getType() const
{
    return typeLit::REELLE;
}

LitNumerique *LitReelle::operator+(LitNumerique &l)
{
    if (l.getType() != typeLit::REELLE)
    {
        return LitNumerique::operator+(l);
    }
    LitReelle &l_new = dynamic_cast<LitReelle &>(l);
    return new LitReelle(valeur + l_new.valeur);
}

LitNumerique *LitReelle::operator-(LitNumerique &l)
{
    if (l.getType() != typeLit::REELLE)
    {
        return LitNumerique::operator-(l);
    }
    LitReelle &l_new = dynamic_cast<LitReelle &>(l);
    return new LitReelle(valeur - l_new.valeur);
}

LitNumerique *LitReelle::operator*(LitNumerique &l)
{
    if (l.getType() != typeLit::REELLE)
    {
        return LitNumerique::operator*(l);
    }
    LitReelle &l_new = dynamic_cast<LitReelle &>(l);
    return new LitReelle(valeur * l_new.valeur);
}

LitNumerique *LitReelle::operator/(LitNumerique &l)
{
    if (l.getType() != typeLit::REELLE)
    {
        return LitNumerique::operator/(l);
    }
    LitReelle &l_new = dynamic_cast<LitReelle &>(l);
    if (l.isNull())
        throw CalculatorException(" Divsion imposible par 0");
    return new LitReelle(valeur / l_new.valeur);
}

bool LitReelle::operator==(LitNumerique &l)
{
    if (l.getType() != typeLit::REELLE)
    {
        return LitNumerique::operator==(l);
    }
    LitReelle &l_new = dynamic_cast<LitReelle &>(l);
    return this->valeur == l_new.valeur;
}

bool LitReelle::operator!=(LitNumerique &l)
{
    if (l.getType() != typeLit::REELLE)
    {
        return LitNumerique::operator!=(l);
    }
    LitReelle &l_new = dynamic_cast<LitReelle &>(l);
    return this->valeur != l_new.valeur;
}

bool LitReelle::operator>=(LitNumerique &l)
{
    if (l.getType() != typeLit::REELLE)
    {
        return LitNumerique::operator>=(l);
    }
    LitReelle &l_new = dynamic_cast<LitReelle &>(l);
    return this->valeur >= l_new.valeur;
}

bool LitReelle::operator<=(LitNumerique &l)
{
    if (l.getType() != typeLit::REELLE)
    {
        return LitNumerique::operator<=(l);
    }
    LitReelle &l_new = dynamic_cast<LitReelle &>(l);
    return this->valeur <= l_new.valeur;
}

bool LitReelle::operator>(LitNumerique &l)
{
    if (l.getType() != typeLit::REELLE)
    {
        return LitNumerique::operator>(l);
    }
    LitReelle &l_new = dynamic_cast<LitReelle &>(l);
    return this->valeur > l_new.valeur;
}

bool LitReelle::operator<(LitNumerique &l)
{
    if (l.getType() != typeLit::REELLE)
    {
        return LitNumerique::operator<(l);
    }
    LitReelle &l_new = dynamic_cast<LitReelle &>(l);
    return this->valeur < l_new.valeur;
}

LitNumerique *LitReelle::SIN()
{
    return new LitReelle(std::sin(static_cast<double>(valeur)));
}

LitNumerique *LitReelle::COS()
{
    return new LitReelle(std::cos(static_cast<double>(valeur)));
}

LitNumerique *LitReelle::TAN()
{
    if (abs(valeur - static_cast<double>(M_PI / 2)) < 0.009)
    {
        throw CalculatorException("MATH ERREUR");
    }
    return new LitReelle(std::tan(static_cast<double>(valeur)));
}

LitNumerique *LitReelle::ARCSIN()
{
    return new LitReelle(std::asin(static_cast<double>(valeur)));
}

LitNumerique *LitReelle::ARCCOS()
{
    return new LitReelle(std::acos(static_cast<double>(valeur)));
}

LitNumerique *LitReelle::ARCTAN()
{
    return new LitReelle(std::atan(static_cast<double>(valeur)));
}

LitNumerique *LitReelle::SQRT()
{
    return new LitReelle(static_cast<double>(std::sqrt(static_cast<double>(valeur))));
}

LitNumerique *LitReelle::EXP()
{
    return new LitReelle(std::exp(static_cast<double>(valeur)));
}

LitNumerique *LitReelle::LN()
{
    if (valeur == 0)
        throw CalculatorException("MATH ERREUR");
    return new LitReelle(std::log(static_cast<double>(valeur)));
}

LitNumerique *LitReelle::NUM()
{
    throw CalculatorException("c'est un reelle !!!");
}

LitNumerique *LitReelle::DEN()
{
    throw CalculatorException("c'est un reelle !!!");
}

LitNumerique *LitReelle::POW(LitNumerique &l)
{
    if (l.getType() != typeLit::REELLE)
    {
        return LitNumerique::POW(l);
    }
    LitReelle &l_new = dynamic_cast<LitReelle &>(l);
    return new LitReelle(std::pow(valeur, l_new.valeur));
}
