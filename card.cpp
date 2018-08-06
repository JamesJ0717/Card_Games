#include <iostream>
#include <vector>

using namespace std;

class Card
{
  public:
	int size;
	Card() : cardSuits(52), cardValues(52)
	{
		for (int i = 0; i < 52; i++)
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

		for (int i = 0; i < size; i++)
		{
			cout << cardValues[i] << " of " << cardSuits.at(i) << endl;
		}
	}

	//Deals a hand
	//Need to fix getting same cards twice
	void deal(Card cards, int handSize)
	{
		// Random number between 1-52
		srand(time(NULL));
		int dealtcardss[handSize];
		for (int i = 0; i < handSize; i++)
		{
			int playercards = rand() % 52 + 1;
			dealtcardss[i] = playercards;
			for (int j = 1; j <= handSize; j++)
			{
				if (dealtcardss[j] == playercards)
				{
					playercards += 3;
					dealtcardss[i] = playercards;
				}
			}
			cout << cardValues[i] << " of " << cardSuits.at(i) << endl;
			// cout<<playercards<<endl;
			// cout<<dealtcardss.at(i)<<endl;
		}
	}

	void removeCard(Card cards, int cardToRemove)
	{
		cout << cardToRemove;
	}

  protected:
	vector<string> cardSuits;
	vector<string> cardValues;
};