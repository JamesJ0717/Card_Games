#include <iostream>
#include "card.cpp"

using namespace std;

int main(void)
{
    Card cards;
    int size;

    cout << "How many cards are you playing with? ";
    cin >> size;
    cards.size = size;
    // Create a new deck of cards

    //cards = cards.makeDeck(size);
    //cards.display(cards);

    //Dealing a hand
    // int handSize = 0;
    // cout << "How many cards are in your hand? ";
    // cin >> handSize;
    // cards.deal(cards, handSize);

    cards.removeCard(cards, 13);
}
