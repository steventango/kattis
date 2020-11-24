#include <iostream>
#include <utility>

int main() {
  int A, B, C, x, y, z;
  std::cin >> A >> B >> C;
  if (A > C) {
    std::swap(A, C);
  }
  if (A > B) {
    std::swap(A, B);
  }
  if (B > C) {
    std::swap(B, C);
  }
  std::string letters;
  std::cin >> letters;
  for (int i = 0; i < letters.size(); i++) {
    switch (letters[i]) {
      case 'A':
        std::cout << A;
        break;
      case 'B':
        std::cout << B;
        break;
      case 'C':
        std::cout << C;
        break;
    }
    if (i < letters.size() - 1) std::cout << " ";
  }
  std::cout << std::endl;
}
