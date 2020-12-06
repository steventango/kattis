#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
  std::unordered_map<char, std::vector<int>> value = {
      {'A', {11, 11}}, {'K', {4, 4}},  {'Q', {3, 3}}, {'J', {2, 20}},
      {'T', {10, 10}}, {'9', {0, 14}}, {'8', {0, 0}}, {'7', {0, 0}},
  };

  int N, points = 0;
  char B;
  std::cin >> N >> B;
  N *= 4;

  while (N--) {
    char number, suit;
    std::cin >> number >> suit;
    points += value[number][suit == B];
  }
  std::cout << points << std::endl;
}
