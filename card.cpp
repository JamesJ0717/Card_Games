#include <iostream>
#include "card.h"

using namespace std;

void Card::shuffle (int size){
    // Card deck[] = {};
    cout<<rand() % size + 1;
}