#include <iostream>
#include <stack>

int main() {
  std::stack<int> stack;
  int n;
  std::cin >> n;
  while (n--) {
    int i_n;
    std::cin >> i_n;
    stack.push(i_n);
  }
  while (stack.size()) {
    std::cout << stack.top() << std::endl;
    stack.pop();
  }
}
