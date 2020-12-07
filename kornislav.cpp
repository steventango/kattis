#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v;
  for (int i = 0, vi; i < 4; i++) {
    std::cin >> vi;
    v.push_back(vi);
  }
  std::sort(v.begin(), v.end());
  std::cout << v[0] * v[2] << std::endl;
}
