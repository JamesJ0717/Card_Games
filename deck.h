#include <iostream>

using namespace std;

class Deck{
    public:
        const static int size = 52;
        string cardSuit[size] = {""};
        string cardValue[size] = {""};

        Deck makeDeck(int);

        void deal(Deck, int);


        void display(Deck);
        
};
