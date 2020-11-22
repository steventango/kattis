#include <iostream>

int main() {
  std::string name, compact = "";
  char prev;
  std::cin >> name;

  for (int i = 0; i < name.size(); i++) {
    if (name[i] != prev) {
      compact += name[i];
      prev = name[i];
    }
  }
  std::cout << compact << std::endl;
}
