#include <iomanip>
#include <iostream>

int main() {
  int N, b;
  double p, minABPM, BPM, maxABPM, delta;
  std::cin >> N;
  while (N > 0) {
    std::cin >> b >> p;
    delta = 60 / p;
    BPM = delta * b;
    minABPM = BPM - delta;
    maxABPM = BPM + delta;
    std::cout << std::setprecision(6) << minABPM << " " << BPM << " " << maxABPM
              << std::endl;
    N--;
  }
}
