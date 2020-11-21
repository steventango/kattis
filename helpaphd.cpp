#include <iostream>
#include <sstream>
#include <string>

int main() {
  int N;
  std::string str;
  std::getline(std::cin, str);
  std::stringstream(str) >> N;
  for (int i = 0; i < N; i++) {
    std::string line;
    std::getline(std::cin, line);
    if (line.compare("P=NP") == 0) {
      std::cout << "skipped" << '\n';
    } else {
      std::istringstream stream(line);
      std::string stra, strb;
      std::getline(stream, stra, '+');
      std::getline(stream, strb, '+');
      int a = std::stoi(stra);
      int b = std::stoi(strb);
      std::cout << a + int(b) << '\n';
    }
  }
}
