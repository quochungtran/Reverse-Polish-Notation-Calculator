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
    virtual bool isNull()       const  = 0;

    /**
    * Return type of litterale
    */
    virtual typeLit getType()   const  = 0;

    /**    
    * affchier la valeur
    */
    virtual QString getText()    const = 0;

    /**    
    * take pointeur Numerique pour derived classes Numerique
    * active Polymopphism 
    */
    virtual LitNumerique *getValeurNumerique() = 0;

private:
    typeLit type;
};

#endif
