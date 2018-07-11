#include <iostream>
#include "deck.h"
#include "card.h"

using namespace std;

// void deal(int deck);

int main(void)
{
    Deck cards;
    cards.size = 52;
    cards.shuffle(cards);
    cards.display(cards);
    
    //deal(52);
}

// void deal(int deck)
// {
//     cout<<"Ace of Spades"<<endl;
//     return ;
// }