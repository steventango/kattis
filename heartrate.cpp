#include <iostream>

int main() {
  int N, b;
  float p, minABPM, BPM, maxABPM, delta;
  std::cin >> N;
  std::cout << std::fixed;
  std::cout.precision(4);
  while (N--) {
    std::cin >> b >> p;
    delta = 60.0 / p;
    BPM = delta * b;
    minABPM = BPM - delta;
    maxABPM = BPM + delta;
    std::cout << minABPM << " " << BPM << " " << maxABPM << std::endl;
  }
}
