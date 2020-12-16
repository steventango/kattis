#include <iostream>

int main() {
  int N;
  std::cin >> N;

  std::string previous;
  std::cin >> previous;
  N--;

  bool increasing = true, decreasing = true;

  while (N--) {
    std::string name;
    std::cin >> name;

    if (previous.compare(name) < 0) {
      decreasing = false;
    } else if (previous.compare(name) > 0) {
      increasing = false;
    }
    
    previous = name;
  }

  if (increasing) {
    std::cout << "INCREASING" << std::endl;
  } else if (decreasing) {
    std::cout << "DECREASING" << std::endl;
  } else {
    std::cout << "NEITHER" << std::endl;
  }
}
