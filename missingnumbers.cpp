#include <iostream>
#include <list>

int main() {
  int n;
  std::cin >> n;

  std::list<int> forgotten;
  int previous = 0;

  while (n--) {
    int recited;
    std::cin >> recited;
    for (int i = previous + 1; i < recited; ++i) {
      forgotten.push_back(i);
    }
    previous = recited;
  }

  if (forgotten.size()) {
    for (int missed : forgotten) {
      std::cout << missed << std::endl;
    }
  } else {
    std::cout << "good job" << std::endl;
  }
}
