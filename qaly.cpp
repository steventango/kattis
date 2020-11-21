#include <iostream>
#include <sstream>
#include <string>

int main() {
  int N;
  float sum = 0;
  std::string str;
  std::getline(std::cin, str);
  std::stringstream(str) >> N;
  for (int i = 0; i < N; i++) {
    std::string line;
    std::getline(std::cin, line);
    std::stringstream stream(line);
    float a, b;
    stream >> a >> b;
    sum += a * b;
  }
  std::cout << sum;
}
