#include "card.h"
#include <iostream>
#include <string>
using namespace std;

Card::Card(char rank_arr, char suit_arr) {
  rank = rank_arr;
  suit = suit_arr;
}
void Card::display() {
  if (rank == '=') {
    cout << "10" << suit << " ";
  } else if (rank == '0') {
    cout << "A" << suit << " ";
  } else if (rank == 'k') {
    cout << "K" << suit << " ";
  } else {
    cout << rank << suit << " ";
  }
}
int Card::compare(Card other) {
  if (rank == other.rank) {
    return 0;
  } else if (rank > other.rank) {
    return 1;
  } else {
    return -1;
  }
}