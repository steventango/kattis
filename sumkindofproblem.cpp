#include <iostream>

int main() {
  int P;
  std::cin >> P;
  while (P--) {
    int K, N, S1, S2, S3;
    std::cin >> K >> N;
    S1 = N * (N + 1) / 2;
    S2 = N * N;
    S3 = N * (N + 1);
    std::cout << K << " " << S1 << " " << S2 << " " << S3 << std::endl;
  }
}
