#include <iostream>
#include "deck.h"

using namespace std;

// void deal(int deck);

int main(void){
    
    // Create a new deck of cards
    Deck cards = cards.makeDeck();
    // cards.display(cards);
    
    int handSize = 0;
    cin>>handSize;
    cards.deal(cards, handSize);  
}
