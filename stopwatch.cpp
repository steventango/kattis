#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);

  int N;
  std::cin >> N;

  if (N % 2 == 0) {
    int time = 0;
    for (int i = 0; i < N; i += 2) {
      int start, stop;
      std::cin >> start >> stop;
      time += stop - start;
    }
    std::cout << time << std::endl;
  } else {
    std::cout << "still running" << std::endl;
  }
}
