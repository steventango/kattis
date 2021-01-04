#include <iostream>
#include <list>
#include <string>

int main() {
  int T;
  std::cin >> T;
  std::cin.ignore();

  while (T--) {
    std::string str;
    std::list<char> out;
    std::getline(std::cin, str);

    std::list<char>::iterator iter = out.begin();
    for (char c : str) {
      switch (c) {
        case '<':
          if (iter != out.begin()) {
            iter = out.erase(--iter);
          }
          break;
        case '[':
          iter = out.begin();
          break;
        case ']':
          iter = out.end();
          break;
        default:
          iter = out.insert(iter, c);
          iter++;
          break;
      }
    }

    for (char x : out) {
      std::cout << x;
    }
    std::cout << std::endl;
  }
}
