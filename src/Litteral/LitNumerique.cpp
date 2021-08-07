#include "LitNumerique.h"

typeLit LitNumerique::typeMax(Litterale &l)
{
    typeLit type_this = this->getType();
    typeLit type_l = l.getType();
    
    int type_max_int = std::max(static_cast<int>(type_this), static_cast<int>(type_l));
    
    typeLit type_max = static_cast<typeLit>(type_max_int);
    return type_max;
};

LitNumerique *LitNumerique::operator+(LitNumerique &l)
{
    typeLit type_max = typeMax(l);
    LitNumerique *this_new = convertToNumrique(type_max);
    LitNumerique *l_new = l.convertToNumrique(type_max);
    return *this_new + *l_new;
}

LitNumerique *LitNumerique::operator-(LitNumerique &l)
{
    typeLit type_max = typeMax(l);
    LitNumerique *this_new = convertToNumrique(type_max);
    LitNumerique *l_new = l.convertToNumrique(type_max);
    return *this_new - *l_new;
}

LitNumerique *LitNumerique::operator*(LitNumerique &l)
{
    typeLit type_max = typeMax(l);
    LitNumerique *this_new = convertToNumrique(type_max);
    LitNumerique *l_new = l.convertToNumrique(type_max);
    return *this_new * *l_new;
}

LitNumerique *LitNumerique::operator/(LitNumerique &l)
{
    typeLit type_max = typeMax(l);
    LitNumerique *this_new = convertToNumrique(type_max);
    LitNumerique *l_new = l.convertToNumrique(type_max);
    return *this_new / *l_new;
}

LitNumerique *LitNumerique::POW(LitNumerique &l)
{
    typeLit type_max = typeMax(l);
    LitNumerique *this_new = convertToNumrique(type_max);
    LitNumerique *l_new = l.convertToNumrique(type_max);
    return POW(*l_new);
}

bool LitNumerique::operator==(LitNumerique &l)
{
    typeLit type_max = typeMax(l);
    LitNumerique *this_new = convertToNumrique(type_max);
    LitNumerique *l_new = l.convertToNumrique(type_max);
    return *this_new == *l_new;
}

bool LitNumerique::operator!=(LitNumerique &l)
{
    typeLit type_max = typeMax(l);
    LitNumerique *this_new = convertToNumrique(type_max);
    LitNumerique *l_new = l.convertToNumrique(type_max);
    return *this_new != *l_new;
}

bool LitNumerique::operator>=(LitNumerique &l)
{
    typeLit type_max = typeMax(l);
    LitNumerique *this_new = convertToNumrique(type_max);
    LitNumerique *l_new = l.convertToNumrique(type_max);
    return *this_new >= *l_new;
}

bool LitNumerique::operator<=(LitNumerique &l)
{
    typeLit type_max = typeMax(l);
    LitNumerique *this_new = convertToNumrique(type_max);
    LitNumerique *l_new = l.convertToNumrique(type_max);
    return *this_new <= *l_new;
}

bool LitNumerique::operator>(LitNumerique &l)
{
    typeLit type_max = typeMax(l);
    LitNumerique *this_new = convertToNumrique(type_max);
    LitNumerique *l_new = l.convertToNumrique(type_max);
    return *this_new == *l_new;
}

bool LitNumerique::operator<(LitNumerique &l)
{
    typeLit type_max = typeMax(l);
    LitNumerique *this_new = convertToNumrique(type_max);
    LitNumerique *l_new = l.convertToNumrique(type_max);
    return *this_new < *l_new;
}


