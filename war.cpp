#include <iostream>
#include <string>
using namespace std;
int main() {

  string p1, p2;
  Deck deck;
  cout << "Enter the name of the first player: ";
  cin >> p1;
  cout << "Enter the name of the first player: ";
  cin >> p2;
  cout << "Original Deck" << endl;
  deck.display();
  cout << endl;
  cout << "Shuffled Deck" << endl;
  deck.shuffle();
  deck.display();
  cout << endl;

  int p1_points = 0;
  int p2_points = 0;

  for (int p = 1; p <= 26; p++) {
    cout << "\nGame " << p << endl;
    cout << "--------" << endl;
    Card c1 = deck.deal();
    Card c2 = deck.deal();
    cout << p1 << "=> ";
    c1.display();
    cout << endl;
    cout << p2 << "=> ";
    c2.display();
    cout << endl;
    int result = c1.compare(c2);
    if (result == 1) {
      cout << endl << p1 << "=> Winner" << endl;
      p1_points += 1;
    } else if (result == -1) {
      cout << endl << p2 << "=> Winner" << endl;
      p2_points += 1;
    } else {
      cout << endl << "Tie game" << endl;
    }
  }
  cout << endl << "------Final Stats-------" << endl;
  cout << "         " << p1 << " vs . " << p2 << endl;
  cout << "Wins     " << p1_points << "         " << p2_points << endl;
  cout << "Losses   " << p2_points << "         " << p1_points << endl;
  cout << "Ties     " << 26 - (p1_points + p2_points) << "          "
       << 26 - (p1_points + p2_points) << endl;
}