#include <iostream>
#include <queue>
#include <stack>

int main() {
  int n, i = 0;

  while (std::cin >> n && n != 0) {
    std::queue<std::string> anames;
    std::stack<std::string> bnames;

    for (int j = 0; j < n; j++) {
      std::string name;
      std::cin >> name;
      if (j % 2 == 0) {
        anames.push(name);
      } else {
        bnames.push(name);
      }
    }

    std::cout << "SET " << ++i << std::endl;
    while (anames.size()) {
      std::cout << anames.front() << std::endl;
      anames.pop();
    }
    while (bnames.size()) {
      std::cout << bnames.top() << std::endl;
      bnames.pop();
    }
  }
}
