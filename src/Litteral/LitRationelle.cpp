#include "LitEntier.h"
#include "LitRationelle.h"
#include "LitReelle.h"
#include "CalculatorException.h"

bool LitRationelle::isNull() const
{
    return (numerateur == 0);
}

bool LitRationelle::isPos() const
{
    return (numerateur > 0);
}

typeLit LitRationelle::getType() const
{
    return typeLit::RAT;
}

int LitRationelle::getNum() const
{
    return numerateur;
}

unsigned int LitRationelle::getDen() const
{
    return denominateur;
}

LitNumerique *LitRationelle::convertToNumrique(typeLit type)
{
    switch (type)
    {
    case typeLit::ENTIER:
        return new LitEntier{numerateur};
        break;
    case typeLit::REELLE:
        return new LitReelle{double(numerateur) / denominateur};
        break;
    default:
        return this;
        break;
    }
}
void LitRationelle::simplifier()
{
    // si le numerateur est 0, le denominateur prend la valeur 1
    if (numerateur == 0)
    {
        denominateur = 1;
        return;
    }
    /* un denominateur ne devrait pas être 0;
    si c’est le cas, on sort de la méthode */
    if (denominateur == 0)
        return;
    /* utilisation de l’algorithme d’Euclide pour trouver le Plus Grand Commun
    Denominateur (PGCD) entre le numerateur et le denominateur */
    int a = numerateur, b = denominateur;
    // on ne travaille qu’avec des valeurs positives...
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    // on divise le numerateur et le denominateur par le PGCD=a
    numerateur /= a;
    denominateur /= a;
    // si le denominateur est négatif, on fait passer le signe - au denominateur
    if (denominateur < 0)
    {
        denominateur = -denominateur;
        numerateur = -numerateur;
    }
}

QString LitRationelle::getText() const
{
    if (denominateur != 1)
        return QString((std::to_string(numerateur) + '/' + std::to_string(denominateur)).c_str());
    else
        return QString((std::to_string(numerateur)).c_str());
}

// Des operateurs overiding
LitNumerique *LitRationelle::operator+(LitNumerique &l)
{
    if (l.getType() != typeLit::RAT)
    {
        return LitNumerique::operator+(l);
    }
    LitRationelle &l_new = dynamic_cast<LitRationelle &>(l);
    return new LitRationelle{numerateur * l_new.denominateur + l_new.numerateur * denominateur, denominateur * l_new.denominateur};
}

LitNumerique *LitRationelle::operator-(LitNumerique &l)
{
    if (l.getType() != typeLit::RAT)
    {
        return LitNumerique::operator-(l);
    }
    LitRationelle &l_new = dynamic_cast<LitRationelle &>(l);
    return new LitRationelle{numerateur * l_new.denominateur - l_new.numerateur * denominateur, denominateur * l_new.denominateur};
}

LitNumerique *LitRationelle::operator*(LitNumerique &l)
{
    if (l.getType() != typeLit::RAT)
    {
        return LitNumerique::operator*(l);
    }
    LitRationelle &l_new = dynamic_cast<LitRationelle &>(l);
    return new LitRationelle{numerateur * l_new.numerateur, denominateur * l_new.denominateur};
}

LitNumerique *LitRationelle::operator/(LitNumerique &l)
{
    if (l.getType() != typeLit::RAT)
    {
        return this->LitNumerique::operator/(l);
    }
    LitRationelle &l_new = dynamic_cast<LitRationelle &>(l);
    if (l.isNull())
        throw CalculatorException("Division impossible par 0 ");
    return new LitRationelle{numerateur * l_new.denominateur, denominateur * l_new.numerateur};
}

bool LitRationelle::operator==(LitNumerique &l)
{
    if (l.getType() != typeLit::RAT)
    {
        return LitNumerique::operator==(l);
    }
    LitRationelle &l_new = dynamic_cast<LitRationelle &>(l);
    return (this->numerateur == l_new.numerateur && this->denominateur == l_new.denominateur);
}

bool LitRationelle::operator!=(LitNumerique &l)
{
    if (l.getType() != typeLit::RAT)
    {
        return LitNumerique::operator!=(l);
    }
    LitRationelle &l_new = dynamic_cast<LitRationelle &>(l);
    int num = this->numerateur * l_new.denominateur - this->denominateur * l_new.numerateur;
    return (num != 0);
}

bool LitRationelle::operator>=(LitNumerique &l)
{
    if (l.getType() != typeLit::RAT)
    {
        return LitNumerique::operator>=(l);
    }
    LitRationelle &l_new = dynamic_cast<LitRationelle &>(l);
    int num = this->numerateur * l_new.denominateur - this->denominateur * l_new.numerateur;
    return (num >= 0);
}

bool LitRationelle::operator<=(LitNumerique &l)
{
    if (l.getType() != typeLit::RAT)
    {
        return LitNumerique::operator<=(l);
    }
    LitRationelle &l_new = dynamic_cast<LitRationelle &>(l);
    int num = this->numerateur * l_new.denominateur - this->denominateur * l_new.numerateur;
    return (num <= 0);
}

bool LitRationelle::operator<(LitNumerique &l)
{
    if (l.getType() != typeLit::RAT)
    {
        return LitNumerique::operator<(l);
    }
    LitRationelle &l_new = dynamic_cast<LitRationelle &>(l);
    int num = this->numerateur * l_new.denominateur - this->denominateur * l_new.numerateur;
    return (num < 0);
}

bool LitRationelle::operator>(LitNumerique &l)
{
    if (l.getType() != typeLit::RAT)
    {
        return LitNumerique::operator>(l);
    }
    LitRationelle &l_new = dynamic_cast<LitRationelle &>(l);
    int num = this->numerateur * l_new.denominateur - this->denominateur * l_new.numerateur;
    return (num > 0);
}

LitNumerique *LitRationelle::SIN()
{
    return new LitReelle(static_cast<double>(std::sin(static_cast<double>(numerateur) / static_cast<double>(denominateur))));
}

LitNumerique *LitRationelle::COS()
{
    return new LitReelle(static_cast<double>(std::cos(static_cast<double>(numerateur) / static_cast<double>(denominateur))));
}

LitNumerique *LitRationelle::TAN()
{
    if (abs(static_cast<double>(numerateur / denominateur) - static_cast<double>(M_PI / 2)) < 0.009)
    {
        throw CalculatorException("MATH ERREUR");
    }
    return new LitReelle(static_cast<double>(std::tan(static_cast<double>(numerateur) / static_cast<double>(denominateur))));
}

LitNumerique *LitRationelle::ARCSIN()
{
    return new LitReelle(static_cast<double>(std::asin(static_cast<double>(numerateur) / static_cast<double>(denominateur))));
}

LitNumerique *LitRationelle::ARCCOS()
{
    return new LitReelle(static_cast<double>(std::acos(static_cast<double>(numerateur) / static_cast<double>(denominateur))));
}

LitNumerique *LitRationelle::ARCTAN()
{
    return new LitReelle(static_cast<double>(std::atan(static_cast<double>(numerateur) / static_cast<double>(denominateur))));
}

LitNumerique *LitRationelle::SQRT()
{
    return new LitReelle(static_cast<double>(std::sqrt(static_cast<double>(numerateur) / static_cast<double>(denominateur))));
}

LitNumerique *LitRationelle::EXP()
{
    return new LitReelle(static_cast<double>(std::exp(static_cast<double>(numerateur) / static_cast<double>(denominateur))));
}

LitNumerique *LitRationelle::LN()
{
    if (numerateur == 0)
        throw CalculatorException("MATH ERREUR");
    return new LitReelle(static_cast<double>(std::log(static_cast<double>(numerateur) / static_cast<double>(denominateur))));
}

LitNumerique *LitRationelle::NUM()
{
    return new LitEntier(numerateur);
}

LitNumerique *LitRationelle::DEN()
{
    return new LitEntier(denominateur);
}

LitNumerique *LitRationelle::POW(LitNumerique &l)
{
    if (l.getType() != typeLit::RAT)
    {
        return LitNumerique::POW(l);
    }
    LitRationelle &l_new = dynamic_cast<LitRationelle &>(l);
    double a = static_cast<double>(numerateur) / denominateur;
    double b = static_cast<double>(l_new.numerateur) / l_new.denominateur;
    return new LitReelle(std::pow(a, b));
}
