#include <iostream>
#include <queue>

int main() {
  std::ios_base::sync_with_stdio(false);

  int n;
  std::cin >> n;

  std::priority_queue<double> c;
  while (n--) {
    double ci;
    std::cin >> ci;
    c.push(ci);
  }

  double min = 1;
  for (int i = c.size(); i > 0; i--) {
    double fill = c.top() / i;
    if (fill > 1) {
      std::cout << "impossible" << std::endl;
      return 0;
    }
    if (fill < min) min = fill;
    c.pop();
  }
  std::cout << min << std::endl;
}
