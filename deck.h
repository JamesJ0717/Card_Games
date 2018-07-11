//Card data type
#include <iostream>
#include "card.h"

using namespace std;

class Deck
{
    
    public:
        Card card;
        int size;
        void shuffle(Deck);
        void display(Deck);
        
};