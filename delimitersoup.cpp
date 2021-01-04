#include <iostream>
#include <stack>
#include <unordered_map>

int main() {
  int L;
  std::cin >> L;
  std::cin.ignore();

  std::stack<char> program;
  std::unordered_map<char, char> delims = {{'(', ')'}, {'[', ']'}, {'{', '}'}};

  char delimeter;
  for (int i = 0; i < L; i++) {
    std::cin.get(delimeter);

    if (delimeter == ' ') {
      continue;
    } else if (delims.count(delimeter)) {
      program.push(delimeter);
    } else if (program.size() && delims[program.top()] == delimeter) {
      program.pop();
    } else {
      std::cout << delimeter << ' ' << i << std::endl;
      return 0;
    }
  }
  std::cout << "ok so far" << std::endl;
}
