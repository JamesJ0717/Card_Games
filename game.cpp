#include <iostream>
#include "deck.h"

using namespace std;

// void deal(int deck);

int main(void){
    // Card card;
    Deck cards;

    cout<<cards.size<<endl;

    cards.shuffle(cards);
    // cards.display(cards);
    
    cout<<" "<<cards.cardValue[2]<<endl;
}
