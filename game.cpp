#include <iostream>
#include "deck.h"

using namespace std;

// void deal(int deck);

int main(void){
    
    int size;
    cout<<"How many cards are you playing with? ";
    cin>>size;
    // Create a new deck of cards
    Deck cards = cards.makeDeck(size);
    // cards.display(cards);
    
    int handSize = 0;
    cout<<"How many cards are in your hand? ";
    cin>>handSize;
    cards.deal(cards, handSize);  
}
