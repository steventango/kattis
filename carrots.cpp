#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::string NP;
  std::getline(std::cin, NP);
  std::istringstream iss(NP);
  std::string token;
  std::getline(iss, token, ' ');
  std::getline(iss, token, ' ');
  std::cout << token;
}
