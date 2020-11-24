#include <iomanip>
#include <iostream>

int main() {
  int n, b;
  double n2, sum = 0;
  std::cin >> n;
  n2 = n;
  while (n > 0) {
    std::cin >> b;
    if (b > -1) {
      sum += b;
    } else {
      n2--;
    }
    n--;
  }
  std::cout << std::setprecision(17) << sum / n2 << std::endl;
}
