#ifndef __MEMENTO_PILE_H__
#define __MEMENTO_PILE_H__

#include <map>

#include "Pile.h"
#include "LitExpression.h"

class Memento
{
private:
    Pile *etatPile_;

public:
    Memento(Pile &pile)
    {
        etatPile_ = pile.clone();
        // stockage_ = stockage;
    }
    Pile &getEtatPile() const { return *etatPile_; }
    ~Memento() { delete etatPile_; }
};

class CareTakerPile
{
    std::vector<Memento *> historiquePile_;

public:
    void addMementoPile(Memento &etat, unsigned int index)
    {
        if (index < getTailleHistorique())
        {
            historiquePile_[index] = &etat;
        }
        else
        {
            historiquePile_.push_back(&etat);
        }
    }
    Memento &getMementoPile(unsigned int index) const { return *historiquePile_[index]; }
    unsigned int getTailleHistorique() const { return historiquePile_.size(); }
    void pop() { historiquePile_.pop_back(); }
};

#endif // __MEMENTO_PILE_H__