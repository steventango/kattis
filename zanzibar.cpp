#include <iostream>

int main() {
  int T;
  std::cin >> T;
  while (T--) {
    int N, last = 1, import = 0;
    while (std::cin >> N && N > 0) {
      if (N > last * 2) import += N - last * 2;
      last = N;
    }
    std::cout << import << std::endl;
  }
}
