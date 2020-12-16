#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> bus_numbers, buffer;
  std::vector<std::string> output;

  while (n--) {
    int bus_number;
    std::cin >> bus_number;
    bus_numbers.push_back(bus_number);
  }

  std::sort(bus_numbers.begin(), bus_numbers.end());
  bus_numbers.push_back(-1);

  buffer.push_back(bus_numbers[0]);
  for (int i = 1; i < bus_numbers.size(); i++) {
    if (buffer.back() + 1 == bus_numbers[i]) {
      buffer.push_back(bus_numbers[i]);
      continue;
    }
    if (buffer.size() > 2) {
      output.push_back(std::to_string(buffer.front()) + "-" +
                       std::to_string(buffer.back()));
    } else {
      for (int bus_number : buffer) {
        output.push_back(std::to_string(bus_number));
      }
    }
    buffer.clear();
    buffer.push_back(bus_numbers[i]);
  }

  for (std::string token : output) {
    std::cout << token << " ";
  }
}
