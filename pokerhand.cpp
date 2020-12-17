#include <iostream>
#include <unordered_map>

int main() {
  std::unordered_map<char, int> cards;
  int strength = 1;

  for (int i = 0; i < 5; i++) {
    std::string card;
    std::cin >> card;
    if (cards[card[0]]) {
      cards[card[0]]++;
      if (cards[card[0]] > strength) strength++;
    } else {
      cards[card[0]] = 1;
    }
  }
  std::cout << strength << std::endl;
}
