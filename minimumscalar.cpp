#include <algorithm>
#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int T;
  std::cin >> T;
  for (int X = 0; X < T; X++) {
    int n;
    std::cin >> n;
    std::vector<long long> v1(n), v2(n);
    for (int j = 0; j < n; j++) {
      std::cin >> v1[j];
    }
    for (int j = 0; j < n; j++) {
      std::cin >> v2[j];
    }
    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end(), std::greater<int>());
    long long Y = 0;
    for (int j = 0; j < n; j++) {
      Y += v1[j] * v2[j];
    }
    std::cout << "Case #" << X + 1 << ": " << Y << std::endl;
  }
}
