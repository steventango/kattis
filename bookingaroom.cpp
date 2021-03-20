#include <iostream>
#include <unordered_set>

int main() {
  int r, n;
  std::cin >> r >> n;
  if (n < r) {
    std::unordered_set<int> available;
    for (int i = 1; i <= r; ++i) {
      available.insert(i);
    }
    while (n--) {
      int booked;
      std::cin >> booked;
      available.erase(booked);
    }
    std::cout << *available.begin() << std::endl;
  } else {
    std::cout << "too late" << std::endl;
  }
}
