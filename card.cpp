#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

class Card
{
  public:
	const static int size = 52;
	Card() : cardSuits(size), cardValues(size)
	{
		for (int i = 0; i < size; i++)
		{
			cardSuits[i] = "0";
			cardValues[i] = "0";
		}
	}

	//Makes the deck
	void makeDeck(int size)
	{
		// Cycle through each cards and set cardsSuit
		// In a standard deck, each suit has 13 cardss
		for (int i = 0; i < size; i++)
		{
			switch (i % 4 + 1)
			{
			case 1:
				cardSuits[i] = "Diamonds";
				break;
			case 2:
				cardSuits[i] = "Spades";
				break;
			case 3:
				cardSuits[i] = "Hearts";
				break;
			case 4:
				cardSuits[i] = "Clubs";
				break;
			default:
				break;
			}

			// Debugging stuff
			// cout<<i%13 + 1<<" ";
			// A standard deck includes 4 of each number(Ace, Two, etc.)
			// This switch takes the iteration and takes the modulous of it and 13 and adds 1,
			// making it run through 13 cases, each one being a new
			switch (i % 13 + 1)
			{
			case 1:
				cardValues[i] = "Ace";
				cardValues[i] = "Ace";
				cardValues[i] = "Ace";
				cardValues[i] = "Ace";
				break;
			case 2:
				cardValues[i] = "Two";
				cardValues[i] = "Two";
				cardValues[i] = "Two";
				cardValues[i] = "Two";
				break;
			case 3:
				cardValues[i] = "Three";
				cardValues[i] = "Three";
				cardValues[i] = "Three";
				cardValues[i] = "Three";
				break;
			case 4:
				cardValues[i] = "Four";
				cardValues[i] = "Four";
				cardValues[i] = "Four";
				cardValues[i] = "Four";
				break;
			case 5:
				cardValues[i] = "Five";
				cardValues[i] = "Five";
				cardValues[i] = "Five";
				cardValues[i] = "Five";
				break;
			case 6:
				cardValues[i] = "Six";
				cardValues[i] = "Six";
				cardValues[i] = "Six";
				cardValues[i] = "Six";
				break;
			case 7:
				cardValues[i] = "Seven";
				cardValues[i] = "Seven";
				cardValues[i] = "Seven";
				cardValues[i] = "Seven";
				break;
			case 8:
				cardValues[i] = "Eight";
				cardValues[i] = "Eight";
				cardValues[i] = "Eight";
				cardValues[i] = "Eight";
				break;
			case 9:
				cardValues[i] = "Nine";
				cardValues[i] = "Nine";
				cardValues[i] = "Nine";
				cardValues[i] = "Nine";
				break;
			case 10:
				cardValues[i] = "Ten";
				cardValues[i] = "Ten";
				cardValues[i] = "Ten";
				cardValues[i] = "Ten";
				break;
			case 11:
				cardValues[i] = "Jack";
				cardValues[i] = "Jack";
				cardValues[i] = "Jack";
				cardValues[i] = "Jack";
				break;
			case 12:
				cardValues[i] = "Queen";
				cardValues[i] = "Queen";
				cardValues[i] = "Queen";
				cardValues[i] = "Queen";
				break;
			case 13:
				cardValues[i] = "King";
				cardValues[i] = "King";
				cardValues[i] = "King";
				cardValues[i] = "King";
				break;
			}
		}
	}

	// Display
	void display(Card cards)
	{
		for (int i = 0; i < cardValues.size(); i++)
		{
			cout << cardValues[i] << " of " << cardSuits[i] << endl;
		}
	}

	//Deals a hand
	//Need to fix getting same cards twice
	void deal(Card cards, int handSize)
	{
		// Random number for each card
		srand(time(NULL));
		// int dealtcardss[handSize];
		int j = 52;
		for (int i = 0; i < handSize; i++)
		{
			int playercards = rand() % j;
			cout << cardValues[playercards] << " of " << cardSuits[playercards] << endl;
			removeCard(cards, playercards);
			// cout<<playercards<<endl;
			// cout<<dealtcardss.at(i)<<endl;
			j--;
		}
	}

	void removeCard(Card cards, int cardToRemove)
	{
		cardSuits.erase(cardSuits.begin() + cardToRemove);
		cardValues.erase(cardValues.begin() + cardToRemove);
	}

	vector<string> cardSuits;
	vector<string> cardValues;
};