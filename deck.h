#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <vector>
using namespace std;

class Deck {
private:
  vector<Card> box;

public:
  Deck();
  Card deal();
  void display();
  void shuffle();
};
#endif