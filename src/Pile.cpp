#include "Pile.h"

Pile *Pile::clone()
{
    return new Pile(*this);
}

bool Pile::estVide()
{
    return maPile.empty();
}

unsigned int Pile::capacite()
{
    return maPile.capacity();
}

const int Pile::taille()
{
    return maPile.size();
}

void Pile::pop()
{
    maPile.pop_back();
}

void Pile::push(Litterale *litterale)
{
    return maPile.push_back(litterale);
}

Litterale *Pile::top()
{
    return maPile.back();
}

Litterale *Pile::element(int index)
{
    if (index > maPile.size())
        throw CalculatorException("Index invalide");
    return maPile[index];
}

void Pile::vide()
{
    // for (unsigned int i = 0; i < maPile.size() ;i++)
    // {
    //     maPile.pop_back();
    // }
    maPile.clear();
}

void Pile::remplace(int index, Litterale *litterale)
{
    if (index > maPile.size())
        throw CalculatorException("Index invalide");
    maPile[index] = litterale;
}

void Pile::afficher(std::ostream &f)
{

    for (Litterale *litterale : maPile)
    {
        f << litterale->getText().toStdString();
        f << " ";
    }
    f << "\n";
}