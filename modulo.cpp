#include <iostream>
#include <unordered_set>

int main() {
  int N = 10, I;
  std::unordered_set<int> distinct;
  while (std::cin >> I) {
    distinct.insert(I % 42);
  }
  std::cout << distinct.size() << std::endl;
}
