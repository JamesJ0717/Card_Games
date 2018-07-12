#include <iostream>

using namespace std;

class Deck{
    public:
        int size = 52;
        string cardSuit[52] = {}, cardValue[52] = {};
        void shuffle(Deck);
        void display(Deck);
        
};
