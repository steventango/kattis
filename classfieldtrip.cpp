#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  std::string ann, ben, merged;
  std::cin >> ann >> ben;
  int i = 0, j = 0;
  while (i < ann.size() && j < ben.size()) {
    if (ann[i] < ben[j]) {
      merged += ann[i];
      i++;
    } else {
      merged += ben[j];
      j++;
    }
  }
  while (i < ann.size()) {
    merged += ann[i];
    i++;
  }
  while (j < ben.size()) {
    merged += ben[j];
    j++;
  }
  std::cout << merged << std::endl;
}
