#include "deck.h"
#include "card.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

Deck::Deck() {
  char suit_arr[] = {'C', 'S', 'H', 'D'};
  char rank_arr[] = {'0', '2', '3', '4', '5', '6', '7','8', '9', '=', 'J', 'Q', 'K'};

  for (int i = 0; i < sizeof(suit_arr); i++) {
    for (int j = 0; j < sizeof(rank_arr); j++) {
      box.push_back(Card(rank_arr[j], suit_arr[i]));
    }
  }
}
Card Deck::deal() {
  Card c = box.back();
  box.pop_back();
  return c;
}
void Deck::display() {
  for (Card c : box) {
    c.display();
  }
  cout << endl;
}
void Deck::shuffle() {
  srand(time(NULL));
  for (int j = 0; j < 1500; j++) {
    int a = rand() % 52;
    int b = rand() % 52;
    Card x = box[a];
    box[a] = box[b];
    box[b] = x;
  }
}
