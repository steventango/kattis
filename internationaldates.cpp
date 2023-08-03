#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int AA, BB;
  char _;
  std::cin >> AA >> _ >> BB;

  if (AA > 12) {
    std::cout << "EU" << std::endl;
  } else if (BB > 12) {
    std::cout << "US" << std::endl;
  } else {
    std::cout << "either" << std::endl;
  }
}
