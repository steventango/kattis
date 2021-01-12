#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
  int n, i = 1;
  while (std::cin >> n) {
    std::vector<int> integers;
    int integer;
    while (n--) {
      std::cin >> integer;
      integers.push_back(integer);
    }
    std::sort(integers.begin(), integers.end());
    int min = integers.front();
    int max = integers.back();
    int range = max - min;
    std::cout << "Case " << i << ": " << min << " " << max << " " << range
              << std::endl;
    i++;
  }
}
