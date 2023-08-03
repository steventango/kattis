#include <iostream>
#include <sstream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n, m = 0;
  std::cin >> n;
  std::stringstream ss;
  for (int u = 1; u <= n; u++) {
    for (int v = 1; v <= n; v++) {
      int c;
      std::cin >> c;
      if (c != -1) {
        m++;
        ss << u << " " << v << " " << c << std::endl;
      }
    }
  }
  std::cout << m << std::endl;
  std::cout << ss.str();
}
