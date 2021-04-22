#include <iostream>
#include <limits>
#include <vector>

uint64_t invest(uint64_t days,
                const std::vector<std::pair<uint64_t, uint64_t>>& investments) {
  uint64_t profit = 0;
  for (const std::pair<uint64_t, uint64_t>& investment : investments) {
    if (investment.first * days > investment.second) {
      profit += investment.first * days - investment.second;
    }
  }
  return profit;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  
  uint64_t n, M;
  std::cin >> n >> M;

  std::vector<std::pair<uint64_t, uint64_t>> investments(n);

  uint64_t low = 0, high = M;
  for (uint64_t i = 0; i < n; ++i) {
    uint64_t p, c;
    std::cin >> p >> c;
    investments[i] = std::pair<uint64_t, uint64_t>(p, c);
    high += c;
  }

  while (low + 1 < high) {
    uint64_t mid = (low + high) / 2;

    if (invest(mid, investments) >= M) {
      high = mid;
    } else {
      low = mid;
    }
  }
  std::cout << high << std::endl;
}
