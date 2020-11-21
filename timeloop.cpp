#include <iostream>
#include <string>

int main() {
  char str[3];
  std::cin >> str;
  int N = std::stoi(str);
  for (int i = 0; i < N; i++) {
    std::cout << std::to_string(i + 1) + " Abracadabra\n";
  }
}
