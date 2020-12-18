#include <iostream>

int main() {
  std::string string, out;
  std::cin >> string;

  for (char c : string) {
    if (c == '<') {
      out.pop_back();
    } else {
      out.push_back(c);
    }
  }
  std::cout << out << std::endl;
}
