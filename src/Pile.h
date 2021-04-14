    #ifndef Pile_h
#define Pile_h
#include "Litterale.h"
#include "CalculatorException.h"
#include <vector>
class Pile
{
    std::vector<Litterale *> maPile;

public:
    Pile() = default;
    ~Pile() = default;
    Pile(Pile &copyPile) = default;
    Pile &operator=(Pile &copyPile) = default;
    Pile *clone();
    bool estVide();
    unsigned int capacite();
    const int taille();
    void pop();
    void push(Litterale *Litterale);
    Litterale *top();
    Litterale *element(int index);
    void vide();
    void remplace(int index, Litterale *litterale);
    void afficher(std::ostream &f = std::cout);

    // Iterator
    class iterator
    {
        std::vector<Litterale *>::reverse_iterator currentIterator;

        friend class Pile;

    public:
        iterator(std::vector<Litterale *>::reverse_iterator it)
            : currentIterator(it)
        {
        }

        iterator &operator++()
        {
            ++currentIterator;
            return *this;
        }

        Litterale &operator*() { return (**currentIterator); }
        bool operator!=(const iterator &it2)
        {
            return (this->currentIterator != it2.currentIterator);
        }
    };

    iterator end()
    {
        return Pile::iterator(maPile.rend());
    }

    iterator begin()
    {
        return Pile::iterator(maPile.rbegin());
    };
};
#endif