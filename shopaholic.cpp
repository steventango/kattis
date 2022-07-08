#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int n;
  std::cin >> n;

  std::vector<int> p;
  p.reserve(n);

  int p_i;
  for (int i = 0; i < n; ++i) {
    std::cin >> p_i;
    p.push_back(p_i);
  }

  std::sort(p.begin(), p.end(), std::greater<int>());

  unsigned long long discount = 0;
  for (int i = 2; i < n; i += 3) {
    discount += p[i];
  }

  std::cout << discount << std::endl;
}
