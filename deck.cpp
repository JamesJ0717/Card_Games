#include <iostream>
#include "deck.h"

using namespace std;

void Deck::shuffle (int size){
    // Card deck[] = {};
    Deck deck[size];
    for(int i=0;i<52;i++){
        if (i<13)
            deck[i].suit = "Spades";
        else if (i>=13 && i<26)
            deck[i].suit = "Diamonds";
        else if (i>=26 && i<39)
            deck[i].suit = "Clubs";
        else
            deck[i].suit = "Hearts";
    }

    int value = rand() % size + 1;
    
    switch (value)
    {
        case 1:
            deck[1].value = "Ace";
            break;
    
        default:
            break;
    }
}
