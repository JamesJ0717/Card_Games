#include <iostream>

using namespace std;

class Blackjack
{
public:
    const static int blackjack = 21;
    int sum;
    char hitStand;
    int numHits;
    bool playing;

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
        }
        else
        {
            sum = (rand() % 10);
        }
        sum += (rand() % 10);
        cout << sum << endl;

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
                    cout << sum << endl;
                }
                else
                {
                    cout << sum << endl;
                    playing = false;
                }
            }
        }
    }

    int hitMe(int previousSum)
    {
        previousSum += ((rand() % (52 - numHits)) % 13);
        numHits++;
        return previousSum;
    }
};
