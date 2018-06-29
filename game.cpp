#include <iostream>
#include "card.h"

using namespace std;

card deal(int deck);

int main(void)
{
    char faceCards[] = {'A', 'K', 'Q', 'J'};
    int numberedCards[] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
    string suits[] = {"Spades", "Hearts", "Clubs", "Diamonds"};

    // Checking output for all cards and suits  
    // for(int i = 0; i < 4; i++)
    // {
    //     int k = 0;
    //     cout<<suits[i]<<": ";
    //     for(int j = 0; j < 13; j++)
    //     {
    //         if (j <= 3) {
    //             cout<<faceCards[j]<<" ";
    //         }
    //         else
    //         {
    //             cout<<numberedCards[k]<<" ";
    //             k++;
    //         }
    //     }
    //     cout<<endl;
    // }
    
    deal(52);
}

card deal(int deck)
{

}