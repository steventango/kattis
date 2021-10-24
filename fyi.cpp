#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::string telephone_number;
  std::cin >> telephone_number;

  std::cout << (telephone_number.substr(0, 3) == "555") << std::endl;
}
