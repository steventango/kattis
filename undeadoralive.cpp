#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  char c;
  bool is_face = false;
  bool smiley = false;
  bool frowny = false;
  while (std::cin >> std::noskipws >> c) {
    if (c == ':') {
      is_face = true;
      continue;
    }
    if (is_face) {
      if (c == ')') {
        smiley = true;
      } else if (c == '(') {
        frowny = true;
      }
      is_face = false;
    }
  }

  if (smiley && frowny) {
    std::cout << "double agent" << std::endl;
  } else if (smiley) {
    std::cout << "alive" << std::endl;
  } else if (frowny) {
    std::cout << "undead" << std::endl;
  } else {
    std::cout << "machine" << std::endl;
  }
}
