#include <iostream>
#include "blackjack.cpp"

using namespace std;

int main(void)
{
    Blackjack bj;
    int game = 0;

    //Choose game
    cout << "What game would you like to play?" << endl;
    cout << "1: Blackjack" << endl;
    cin >> game;

    srand(time(NULL));
    switch (game)
    {
    case 1:
        bj.play();
        break;

    default:
        break;
    }

    //     cards.display(cards);
}
