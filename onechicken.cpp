#include <iostream>

int main() {
  int N, M;
  std::cin >> N >> M;
  if (M > N) {
    std::cout << "Dr. Chaz will have " << M - N << " piece"
              << (M - N == 1 ? "" : "s") << " of chicken left over!"
              << std::endl;
  } else {
    std::cout << "Dr. Chaz needs " << N - M << " more piece"
              << (N - M == 1 ? "" : "s") << " of chicken!" << std::endl;
  }
}
