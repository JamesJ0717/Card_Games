#include <iostream>

using namespace std;

class Blackjack
{
public:
    const static int blackjack = 21;
    int sum, dealerSum;
    char hitStand;
    int numHits;
    bool playing, dealerPlaying;

    Blackjack()
    {
        hitStand = 'n';
        numHits = 0;
        playing = true;
    }

    void play()
    {
        int firstAce = rand();
        if (firstAce % 52 == 1 || firstAce % 52 == 2 || firstAce % 52 == 50 || firstAce % 52 == 51)
        {
            sum = 11;
            dealerSum = 11;
        }
        else
        {
            sum = (rand() % 10) + 1;
            dealerSum = (rand() % 10) + 1;
        }
        sum += (rand() % 10) + 1;
        dealerSum = (rand() % 10) + 1;

        cout << "Dealer has: " << dealerSum << endl;
        cout << "You have: " << sum << endl;

        playing = true;
        while (playing)
        {
            if (sum > 21)
            {
                cout << "You Bust!" << endl;
                playing = false;
            }
            else if (sum == 21 && numHits == 0)
            {
                cout << "BLACKJACK!" << endl;
                playing = false;
            }
            else
            {
                cout << "Do you want to hit?   ";
                cin >> hitStand;
                if (hitStand == 'y')
                {
                    sum = hitMe(sum);
                    cout << "You currently have: " << sum << endl;
                }
                else
                {
                    cout << "You have: " << sum << endl;
                    dealerPlaying = true;
                    dealerSum = dealerPlay(dealerSum);
                    playing = false;
                }
            }
        }
        whoWon(sum, dealerSum);
    }

    int hitMe(int previousSum)
    {
        previousSum += ((rand() % (52 - numHits)) % 13);
        numHits++;
        return previousSum;
    }

    int dealerPlay(int dealerPrevSum)
    {
        while (dealerPlaying)
        {
            if (dealerPrevSum > 21)
            {
                cout << "Dealer Bust!" << endl;
                dealerPlaying = false;
            }
            else if (dealerPrevSum >= 16)
            {
                cout << "Dealer has: " << dealerPrevSum << endl;
                dealerPlaying = false;
            }
            else
            {
            }

            dealerPrevSum += ((rand() % (52 - numHits)) % 13);
            numHits++;
        }
        return dealerPrevSum;
    }

    void whoWon(int player, int dealer)
    {
        if (player > dealer)
        {
            cout << "You won!" << endl;
        }
        else if (dealer > player)
        {
            cout << "Dealer won!" << endl;
        }
        else
        {
            cout << "Push" << endl;
        }
    }
};
