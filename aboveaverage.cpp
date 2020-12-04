#include <iostream>
#include <vector>

int main() {
  int C;
  std::cin >> C;
  std::cout << std::fixed;
  std::cout.precision(3);

  while (C--) {
    int N, i;
    double above = 0, sum = 0;
    std::vector<double> grades;
    std::cin >> N;
    i = N;

    while (i--) {
      double g;
      std::cin >> g;
      grades.push_back(g);
      sum += g;
    }
    double avg = sum / N;

    for (double g : grades) {
      if (g > avg) above++;
    }
    std::cout << above / N * 100 << "%" << std::endl;
  }
}
