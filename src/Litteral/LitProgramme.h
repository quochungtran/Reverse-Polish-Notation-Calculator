#ifndef LitProgramme_h
#define LitProgramme_h
#include "CalculatorException.h"
#include <iostream>
#include "Litterale.h"

class LitProgramme : public Litterale
{

public:

    LitProgramme(const QString &c) : suitOperand(c) {}

    ~LitProgramme() = default;
    
    //Litterale &simplification() = 0;
    bool           isNull()  const;
    
    typeLit        getType() const;
    
    //Si on veut ajouter autre type Litteral de Number par exemple Litteral Complexe
    //ajouter virtual surchage operator apres pour generer Litterale Complexe
    QString        getText();
    
    // This function permet de tirer le pointeur Numerique pour des classes contient la valeur Numerique
    // on active Polymopphism la
    LitNumerique*  getValeurNumerique();

private:
    QString suitOperand;
};

#endif