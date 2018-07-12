#include <iostream>
#include "deck.h"

using namespace std;

void Deck::shuffle (Deck deck){
    // cardValue deck[] = {};
    for(int i=0;i<deck.size;i++){
        if (i<13){
            deck.cardSuit[i] = "Spades";
        }
        else if (i>=13 && i<26){
            deck.cardSuit[i] = "Diamonds";
        }
        else if (i>=26 && i<39){
            deck.cardSuit[i] = "Clubs";
        }
        else{
            deck.cardSuit[i] = "Hearts";
        }
    }

    int value = rand() % (size/4) + 1;
    
    switch (value)
    {
        case 1:
            deck.cardValue[0] = "Ace";
            deck.cardValue[13] = "Ace";
            deck.cardValue[26] = "Ace";
            deck.cardValue[39] = "Ace";
            break;
        case 2:
            deck.cardValue[1] = "Two";
            deck.cardValue[14] = "Two";
            deck.cardValue[27] = "Two";
            deck.cardValue[40] = "Two";
            break;
        case 3:
            deck.cardValue[2] = "Three";
            deck.cardValue[15] = "Three";
            deck.cardValue[28] = "Three";
            deck.cardValue[41] = "Three";
            break;
        case 4:
            deck.cardValue[3] = "Four";
            deck.cardValue[16] = "Four";
            deck.cardValue[29] = "Four";
            deck.cardValue[42] = "Four";
            break;
        default:
            break;
    }
}

void Deck::display(Deck deck){
    
    for(int i = 0; i < deck.size; i++)
    {
        cout<<deck.card
    }
    
}
