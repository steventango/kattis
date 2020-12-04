#include <iostream>

int main() {
  int days = 0;
  std::string cipher;
  std::cin >> cipher;
  for (int i = 1; i < cipher.size(); i += 3) {
    if (cipher[i - 1] != 'P') days++;
    if (cipher[i] != 'E') days++;
    if (cipher[i + 1] != 'R') days++;
  }
  std::cout << days << std::endl;
}
