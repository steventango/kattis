#include <iomanip>
#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;
  double whitespace = 0, lower = 0, upper = 0, symbols = 0;

  for (int i = 0; i < str.length(); i++) {
    char c = str[i];
    if (c == '_') {
      whitespace++;
    } else if (islower(c)) {
      lower++;
    } else if (isupper(c)) {
      upper++;
    } else {
      symbols++;
    }
  }
  double total = whitespace + lower + upper + symbols;
  std::cout << std::setprecision(15);
  std::cout << whitespace / total << std::endl;
  std::cout << lower / total << std::endl;
  std::cout << upper / total << std::endl;
  std::cout << symbols / total << std::endl;
}
