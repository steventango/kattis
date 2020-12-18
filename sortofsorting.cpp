#include <algorithm>
#include <iostream>
#include <vector>

bool cmp(const std::string &a, const std::string &b) {
  return a[0] == b[0] ? a[1] < b[1] : a[0] < b[0];
}

int main() {
  int n;

  while (std::cin >> n && n > 0) {
    std::vector<std::string> names;

    while (n--) {
      std::string name;
      std::cin >> name;
      names.push_back(name);
    }

    std::stable_sort(names.begin(), names.end(), cmp);

    for (std::string name : names) {
      std::cout << name << std::endl;
    }
    std::cout << std::endl;
  }
}
