#include <iostream>

int main() {
  std::string N, M;
  std::cin >> N >> M;

  while (N.back() == '0' && M.back() == '0') {
    N.pop_back();
    M.pop_back();
  }

  int n = M.size() - 1;

  if (N.size() > M.size()) {
    for (int i = 0; i < N.size() - n; i++) std::cout << N[i];
    if (n) {
      std::cout << '.';
      for (int i = N.size() - n; i < N.size(); i++) std::cout << N[i];
    }
  } else {
    std::cout << "0.";
    for (int i = 0; i < M.size() - N.size() - 1; i++) std::cout << '0';
    std::cout << N;
  }
  std::cout << std::endl;
}
