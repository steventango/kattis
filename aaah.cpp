#include <iostream>
#include <string>

int main() {
  std::string jon, doc;
  std::cin >> jon >> doc;
  std::cout << (jon.size() < doc.size() ? "no" : "go") << std::endl;
}
