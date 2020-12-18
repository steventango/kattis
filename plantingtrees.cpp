#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int N, max = 0;
  std::cin >> N;
  std::vector<int> t;

  while (N--) {
    int ti;
    std::cin >> ti;
    t.push_back(ti);
  }

  std::sort(t.begin(), t.end(), [](int a, int b) { return a > b; });

  for (int i = 0; i < t.size(); i++) {
    t[i] += i + 2;
    if (t[i] > max) max = t[i];
  }

  std::cout << max << std::endl;
}
