#include <iostream>
#include <sstream>
#include <unordered_map>

int main() {
  int solved = 0, time = 0;
  std::unordered_map<char, int> times;
  std::string line;

  while (std::getline(std::cin, line) && line != "-1") {
    std::istringstream iss(line);
    int m;
    char p;
    std::string a;
    iss >> m >> p >> a;

    if (a == "right") {
      solved++;
      times[p] += m;
      time += times[p];
    } else {
      times[p] += 20;
    }
  }
  std::cout << solved << " " << time << std::endl;
}
