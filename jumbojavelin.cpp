#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int N, length = 0;
  std::cin >> N;

  for (int i = 0; i < N; ++i) {
    int l;
    std::cin >> l;
    length += l;
  }

  length -= N - 1;

  std::cout << length;
}
