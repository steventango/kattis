#include <algorithm>
#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, t_, d_, greatest_integral_speed = 0;
  std::cin >> n >> t_ >> d_;
  n--;
  while (n--) {
    int t, d;
    std::cin >> t >> d;
    int integral_speed = (d - d_) / (t - t_);
    greatest_integral_speed = std::max(greatest_integral_speed, integral_speed);
    t_ = t;
    d_ = d;
  }
  std::cout << greatest_integral_speed << std::endl;
}