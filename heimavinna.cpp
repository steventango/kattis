#include <iostream>
#include <string>

int main() {
  int n = 0, last = 0;
  char input;
  std::string temp = "";

  while (std::cin >> input) {
    if (input == '-') {
      last = std::stoi(temp);
      temp = "";
    } else if (input == ';') {
      if (last) n += std::stoi(temp) - last;
      n += 1;
      last = 0;
      temp = "";
    } else {
      temp += input;
    }
  }

  n += last ? std::stoi(temp) - last + 1 : 1;

  std::cout << n << std::endl;
}
