#include <iostream>
#include <limits>
#include <vector>

int kadane(std::vector<int> v) {
  int local_max = 0;
  int global_max = std::numeric_limits<int>::min();

  for (int i = 0; i < v.size(); i++) {
    local_max = std::max(v[i], v[i] + local_max);
    if (local_max > global_max) global_max = local_max;
  }

  return global_max;
}

int main() {
  int N, P;
  std::cin >> N >> P;

  std::vector<int> net;

  while (N--) {
    int L;
    std::cin >> L;
    net.push_back(L - P);
  }

  std::cout << kadane(net) << std::endl;
}
