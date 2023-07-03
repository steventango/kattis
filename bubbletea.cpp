#include <algorithm>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int N, M, X, min_price = std::numeric_limits<int>::max();
  std::cin >> N;
  int tea_prices[N];
  for (int i = 0; i < N; i++) {
    std::cin >> tea_prices[i];
  }
  std::cin >> M;
  int topping_prices[M];
  for (int i = 0; i < M; i++) {
    std::cin >> topping_prices[i];
  }
  std::cin.ignore();
  for (int i = 0; i < N; i++) {
    std::string line;
    std::getline(std::cin, line);
    if (tea_prices[i] > min_price) {
      continue;
    }
    std::istringstream iss(line);
    int topping;
    while (iss >> topping) {
      int price = tea_prices[i] + topping_prices[topping - 1];
      min_price = std::min(price, min_price);
    }
  }
  std::cin >> X;
  int S = std::max(X / min_price - 1, 0);
  std::cout << S << std::endl;
}
