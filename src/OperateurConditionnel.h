#ifndef OpeCond_h
#define OpeCond_h
#include <iostream>
#include "Operateur.h"

class OperateurIFT : public Operateur
{
private:
    Stockage *stockage;

public:
    OperateurIFT() : Operateur("IFT", 2)
    {
    }
    virtual ~OperateurIFT() = default;
    ///////////////////////
    Litterale *traiter(Litterale *l1, Litterale *l2) {}
    ///////////////////////

    Litterale *traiter(Litterale *l1)
    {
        throw CalculatorException("Nombre arguments invalides");
    }

    void traiter(Pile *pile)
    {
        throw CalculatorException("Nombre arguments invalides");
    }
};

#endif