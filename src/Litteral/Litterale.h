#ifndef Litterale_h
#define Litterale_h
#include <iostream>
#include "CalculatorException.h"

enum typeLit
{
    ENTIER,
    RAT,
    REELLE,
    Atom,
    EXP,
    PROG
};
// declaration La class LitNumerique
class LitNumerique;

class Litterale
{

public:

    /**
    * Always make destructor virtual when dealing with inheritance
    */
    virtual ~Litterale() = default;

    /**
    * Check if the litteral is null,  const member function dont allow to change any member variables
    */
    virtual bool isNull()       const = 0;

    /**
    * Return type of litterale
    */
    virtual typeLit getType()   const = 0;

    /**    
    * affchier la valeur
    */
    virtual QString getText()         = 0;

    /**    
    * This function permet de tirer le pointeur Numerique pour des classes contient la valeur Numerique
    * on active Polymopphism la
    */
    virtual LitNumerique *getValeurNumerique() = 0;

private:
    typeLit type;
};

#endif
