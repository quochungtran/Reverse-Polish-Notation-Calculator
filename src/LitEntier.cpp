#include "LitEntier.h"
#include "LitRationelle.h"
#include "LitReelle.h"
#include "CalculatorException.h"
// Verifier l'entier est null ou pas
bool LitEntier::isNull() const
{
    return (valeur == 0);
}

// Verifier l'entier est positive ou pas
bool LitEntier::isPos() const
{
    return (valeur > 0);
}

LitNumerique *LitEntier::convertToNumrique(typeLit type)
{
    if (type == typeLit::ENTIER)
    {
        return new LitEntier{valeur};
    }
    if (type == typeLit::RAT)
    {
        return new LitRationelle{valeur};
    }
    if (type == typeLit::REELLE)
    {
        return new LitReelle{double(valeur)};
    }
}

QString LitEntier::getText()
{
    return QString(std::to_string(valeur).c_str());
}

//  Overriding Les operateurs
LitNumerique *LitEntier::operator+(LitNumerique &l)
{
    if (l.getType() != typeLit::ENTIER)
    {
        return LitNumerique::operator+(l);
    }
    LitEntier &l_new = dynamic_cast<LitEntier &>(l);
    return new LitEntier(valeur + l_new.valeur);
}

LitNumerique *LitEntier::operator-(LitNumerique &l)
{
    if (l.getType() != typeLit::ENTIER)
    {
        return LitNumerique::operator-(l);
    }
    LitEntier &l_new = dynamic_cast<LitEntier &>(l);
    return new LitEntier(valeur - l_new.valeur);
}

LitNumerique *LitEntier::operator*(LitNumerique &l)
{
    if (l.getType() != typeLit::ENTIER)
    {
        return LitNumerique::operator*(l);
    }
    LitEntier &l_new = dynamic_cast<LitEntier &>(l);
    return new LitEntier(valeur * l_new.valeur);
}

LitNumerique *LitEntier::operator/(LitNumerique &l)
{
    if (l.getType() != typeLit::ENTIER)
    {
        return LitNumerique::operator/(l);
    }
    LitEntier &l_new = dynamic_cast<LitEntier &>(l);
    if (l.isNull())
        throw CalculatorException("Division impossible par 0");
    return new LitRationelle(valeur, l_new.valeur);
}

bool LitEntier::operator==(LitNumerique &l)
{
    if (l.getType() != typeLit::ENTIER)
    {
        return LitNumerique::operator==(l);
    }
    LitEntier &l_new = dynamic_cast<LitEntier &>(l);
    return this->valeur == l_new.valeur;
}

bool LitEntier::operator!=(LitNumerique &l)
{
    if (l.getType() != typeLit::ENTIER)
    {
        return LitNumerique::operator!=(l);
    }
    LitEntier &l_new = dynamic_cast<LitEntier &>(l);
    return this->valeur != l_new.valeur;
}

bool LitEntier::operator>=(LitNumerique &l)
{
    if (l.getType() != typeLit::ENTIER)
    {
        return LitNumerique::operator>=(l);
    }
    LitEntier &l_new = dynamic_cast<LitEntier &>(l);
    return this->valeur >= l_new.valeur;
}

bool LitEntier::operator<=(LitNumerique &l)
{
    if (l.getType() != typeLit::ENTIER)
    {
        return LitNumerique::operator<=(l);
    }
    LitEntier &l_new = dynamic_cast<LitEntier &>(l);
    return this->valeur <= l_new.valeur;
}

bool LitEntier::operator>(LitNumerique &l)
{
    if (l.getType() != typeLit::ENTIER)
    {
        return LitNumerique::operator>(l);
    }
    LitEntier &l_new = dynamic_cast<LitEntier &>(l);
    return this->valeur > l_new.valeur;
}

bool LitEntier::operator<(LitNumerique &l)
{
    if (l.getType() != typeLit::ENTIER)
    {
        return LitNumerique::operator<(l);
    }
    LitEntier &l_new = dynamic_cast<LitEntier &>(l);
    return this->valeur < l_new.valeur;
}

LitNumerique *LitEntier::SIN()
{
    return new LitReelle(std::sin(static_cast<double>(valeur)));
}

LitNumerique *LitEntier::COS()
{
    return new LitReelle(std::cos(static_cast<double>(valeur)));
}

LitNumerique *LitEntier::TAN()
{
    if (abs(valeur - static_cast<double>(M_PI / 2)) < 0.009)
    {
        throw CalculatorException("MATH ERREUR");
    }
    return new LitReelle(std::tan(static_cast<double>(valeur)));
}

LitNumerique *LitEntier::ARCSIN()
{
    return new LitReelle(std::asin(static_cast<double>(valeur)));
}

LitNumerique *LitEntier::ARCCOS()
{
    return new LitReelle(std::acos(static_cast<double>(valeur)));
}

LitNumerique *LitEntier::ARCTAN()
{
    return new LitReelle(std::atan(static_cast<double>(valeur)));
}

LitNumerique *LitEntier::SQRT()
{
    return new LitReelle(std::sqrt(static_cast<double>(valeur)));
}

LitNumerique *LitEntier::EXP()
{
    return new LitReelle(std::exp(static_cast<double>(valeur)));
}

LitNumerique *LitEntier::LN()
{
    if (valeur == 0)
        throw CalculatorException("MATH ERREUR");
    return new LitReelle(std::log(static_cast<double>(valeur)));
}

LitNumerique *LitEntier::NUM()
{
    return new LitEntier(valeur);
}

LitNumerique *LitEntier::DEN()
{
    return new LitEntier(1);
}

LitNumerique *LitEntier::POW(LitNumerique &l)
{
    if (l.getType() != typeLit::ENTIER)
    {
        return LitNumerique::POW(l);
    }
    LitEntier &l_new = dynamic_cast<LitEntier &>(l);
    return new LitEntier( std::pow(valeur,l_new.valeur));
}

// LitNumerique *LitEntier::POW(LitNumerique &l)
// {
//     return new LitReelle();
// }