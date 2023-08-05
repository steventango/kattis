#include <cmath>
#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int n;
  long long x, y;
  std::cin >> n >> x >> y;
  while (n--) {
    long long a;
    std::cin >> a;
    std::cout << a * y / x << std::endl;
  }
}
