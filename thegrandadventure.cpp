#include <iostream>
#include <stack>
#include <unordered_map>

int main() {
  int n;
  std::cin >> n;
  std::cin.ignore();

  std::unordered_map<char, char> demands = {{'t', '|'}, {'j', '*'}, {'b', '$'}};

  while (n--) {
    std::stack<char> bag;
    bool finish = true;

    std::string line;
    std::getline(std::cin, line);

    for (char c : line) {
      switch (c) {
        case '$':
        case '*':
        case '|':
          bag.push(c);
          break;
        case 't':
        case 'j':
        case 'b':
          if (bag.empty() || bag.top() != demands[c]) {
            finish = false;
          } else {
            bag.pop();
          }
          break;
      }
    }
    finish &= bag.empty();
    std::cout << (finish ? "YES" : "NO") << std::endl;
  }
}
