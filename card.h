#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

class Card{
    private:
        char rank;
        char suit;
    public:
        // Card(char, char);
        Card(char rank_arr, char suit_arr);
        void display();
        int compare(Card c);
};
#endif



