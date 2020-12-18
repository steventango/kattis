#include <iostream>

int main() {
  int G, S, C, BP;
  std::cin >> G >> S >> C;
  BP = 3 * G + 2 * S + 1 * C;

  std::string VC, TC;
  if (BP > 7) {
    VC = "Province";
  } else if (BP > 4) {
    VC = "Duchy";
  } else {
    VC = "Estate";
  }
  if (BP > 5) {
    TC = "Gold";
  } else if (BP > 2) {
    TC = "Silver";
  } else {
    TC = "Copper";
  }
  if (BP > 1) {
    std::cout << VC << " or ";
  }
  std::cout << TC << std::endl;
}
