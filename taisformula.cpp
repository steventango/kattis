#include <iostream>

int main() {
  int N;
  std::cin >> N;

  float t_, v_;
  std::cin >> t_ >> v_;
  N--;

  float a = 0;

  while (N--) {
    float t, v;
    std::cin >> t >> v;
    a += (v_ + (v - v_) / 2) * (t - t_) / 1000;
    t_ = t;
    v_ = v;
  }

  std::cout << std::fixed;
  std::cout.precision(5);
  std::cout << a << std::endl;
}
