#include <iostream>
#include "card.h"

using namespace std;

void deal(int deck);

int main(void)
{
    Card card;
    card.shuffle(52);

    //deal(52);
}

void deal(int deck)
{
    cout<<"Ace of Spades"<<endl;
    return ;
}