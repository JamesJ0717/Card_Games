#include <iostream>
#include "deck.h"
#include <time.h>

using namespace std;

//Makes the deck
Deck Deck::makeDeck (int size){

    Deck deck;
    // Cycle through each card and set cardSuit
    // In a standard deck, each suit has 13 cards
    for(int i=0;i<size;i++){
        switch (i%4 + 1){
            case 1:
                deck.cardSuit[i] = "Diamonds";
                break;
            case 2:
                deck.cardSuit[i] = "Spades";
                break;
            case 3:
                deck.cardSuit[i] = "Hearts";
                break;
            case 4:
                deck.cardSuit[i] = "Clubs";
                break;
            default:
                break;
        }
       
        // Debugging stuff
        // cout<<i%13 + 1<<" ";
        // A standard deck includes 4 of each number(Ace, Two, etc.)
        // This switch takes the iteration and takes the modulous of it and 13 and adds 1, 
        // making it run through 13 cases, each one being a new card.
        switch (i%13 + 1)
        {
            case 1:
                deck.cardValue[i] = "Ace";
                deck.cardValue[i] = "Ace";
                deck.cardValue[i] = "Ace";
                deck.cardValue[i] = "Ace";
                break;
            case 2:
                deck.cardValue[i] = "Two";
                deck.cardValue[i] = "Two";
                deck.cardValue[i] = "Two";
                deck.cardValue[i] = "Two";
                break;
            case 3:
                deck.cardValue[i] = "Three";
                deck.cardValue[i] = "Three";
                deck.cardValue[i] = "Three";
                deck.cardValue[i] = "Three";
                break;
            case 4:
                deck.cardValue[i] = "Four";
                deck.cardValue[i] = "Four";
                deck.cardValue[i] = "Four";
                deck.cardValue[i] = "Four";
                break;
            case 5:
                deck.cardValue[i] = "Five";
                deck.cardValue[i] = "Five";
                deck.cardValue[i] = "Five";
                deck.cardValue[i] = "Five";
                break;
            case 6:
                deck.cardValue[i] = "Six";
                deck.cardValue[i] = "Six";
                deck.cardValue[i] = "Six";
                deck.cardValue[i] = "Six";
                break;
            case 7:
                deck.cardValue[i] = "Seven";
                deck.cardValue[i] = "Seven";
                deck.cardValue[i] = "Seven";
                deck.cardValue[i] = "Seven";
                break;
            case 8:
                deck.cardValue[i] = "Eight";
                deck.cardValue[i] = "Eight";
                deck.cardValue[i] = "Eight";
                deck.cardValue[i] = "Eight";
                break;
            case 9:
                deck.cardValue[i] = "Nine";
                deck.cardValue[i] = "Nine";
                deck.cardValue[i] = "Nine";
                deck.cardValue[i] = "Nine";
                break;
            case 10:
                deck.cardValue[i] = "Ten";
                deck.cardValue[i] = "Ten";
                deck.cardValue[i] = "Ten";
                deck.cardValue[i] = "Ten";
                break;
            case 11:
                deck.cardValue[i] = "Jack";
                deck.cardValue[i] = "Jack";
                deck.cardValue[i] = "Jack";
                deck.cardValue[i] = "Jack";
                break;
            case 12:
                deck.cardValue[i] = "Queen";
                deck.cardValue[i] = "Queen";
                deck.cardValue[i] = "Queen";
                deck.cardValue[i] = "Queen";
                break;
            case 13:
                deck.cardValue[i] = "King";
                deck.cardValue[i] = "King";
                deck.cardValue[i] = "King";
                deck.cardValue[i] = "King";
                break;
        }
    }
    return(deck);
}

// Display
void Deck::display(Deck deck){
    
    for(int i = 0; i < deck.size; i++)
    {
        cout<<deck.cardValue[i]<<" of "<<deck.cardSuit[i]<<endl;
    }
    
}

//Need to fix getting same card twice
void Deck::deal(Deck deck, int handSize){
	// Random number between 1-52
    srand(time(NULL));
    int dealtCards[handSize];
    for(int i=0; i< handSize; i++){    
        int playerCard = rand() % 52 + 1;
        dealtCards[i] = playerCard;
        for(int j=1; j<=sizeof(dealtCards); j++){
            if(dealtCards[j] == playerCard){
                playerCard += 1;
                dealtCards[i] = playerCard;
            }
        }
        cout<<dealtCards[i]<<" "<<playerCard<<" "<<dealtCards[i]<<endl;
        // cout<<deck.cardValue[playerCard]<<" of "<<deck.cardSuit[playerCard]<<endl;
        // cout<<playerCard<<endl;
        // cout<<dealtCards[i]<<endl;
    }
}

