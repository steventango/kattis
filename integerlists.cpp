#include <iostream>
#include <deque>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  std::string s;
  int n, t, x_i;
  char _;
  std::cin >> t;
  while (t--) {
    std::cin >> s >> n;
    std::deque<int> x;
    bool reversed = false;
    bool error = false;
    std::cin >> _;
    if (n == 0) {
      std::cin >> _;
    }
    while (n--) {
      std::cin >> x_i >> _;
      x.push_back(x_i);
    }
    for (char c : s) {
      if (c == 'R') {
        reversed = !reversed;
      } else if (x.empty()) {
        std::cout << "error" << std::endl;
        error = true;
        break;
      } else if (reversed) {
        x.pop_back();
      } else {
        x.pop_front();
      }
    }
    if (error) {
      continue;
    }
    std::cout << '[';
    while (!x.empty()) {
      if (reversed) {
        std::cout << x.back();
        x.pop_back();
      } else {
        std::cout << x.front();
        x.pop_front();
      }
      if (!x.empty()) {
        std::cout << ',';
      }
    }
    std::cout << "]" << std::endl;
  }
}
