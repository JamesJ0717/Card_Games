#include <iostream>
#include "deck.h"

using namespace std;

void Deck::shuffle (Deck deck){
    // Card deck[] = {};
    for(int i=0;i<deck.size;i++){
        if (i<13)
            deck.card.suit = "Spades";
        else if (i>=13 && i<26)
            deck.card.suit = "Diamonds";
        else if (i>=26 && i<39)
            deck.card.suit = "Clubs";
        else
            deck.card.suit = "Hearts";
    }

    int value = rand() % (size/4) + 1;
    
    // switch (value)
    // {
    //     case 1:
    //         deck[0].value = "Ace";
    //         deck[13].value = "Ace";
    //         deck[26].value = "Ace";
    //         deck[39].value = "Ace";
    //         break;
    //     case 2:
    //         deck[1].value = "Two";
    //         deck[14].value = "Two";
    //         deck[27].value = "Two";
    //         deck[40].value = "Two";
    //         break;
    //     case 3:
    //         deck[2].value = "Three";
    //         deck[15].value = "Three";
    //         deck[28].value = "Three";
    //         deck[41].value = "Three";
    //         break;
    //     case 4:
    //         deck[3].value = "Four";
    //         deck[16].value = "Four";
    //         deck[29].value = "Four";
    //         deck[42].value = "Four";
    //         break;
    //     default:
    //         break;
    // }
}

void Deck::display(Deck deck){
    
    for(int i = 0; i < deck.size; i++)
    {
        /* code */
    }
    
}
