#include <iomanip>
#include <iostream>

int main() {
  int N, b;
  double p, minABPM, BPM, maxABPM, delta;
  std::cin >> N;
  while (N > 0) {
    std::cin >> b >> p;
    BPM = 60. * b / p;
    delta = 60. / p;
    minABPM = BPM - delta;
    maxABPM = BPM + delta;
    std::cout << std::setprecision(6) << minABPM << " " << BPM << " " << maxABPM
              << std::endl;
    N--;
  }
}
