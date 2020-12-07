#include <iostream>

int main() {
  int n;
  std::cin >> n;
  while (n--) {
    std::string a, b;
    std::cin >> a >> b;
    std::cout << a << std::endl << b << std::endl;
    for (int i = 0; i < a.size(); i++) {
      std::cout << (a[i] == b[i] ? '.' : '*');
    }
    std::cout << std::endl << std::endl;
  }
}
