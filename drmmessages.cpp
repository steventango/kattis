#include <iostream>
#include <string>

void rotate(std::string& half) {
  int rotation_value = 0;
  for (char c : half) {
    rotation_value += c - 'A';
  }

  for (int i = 0; i < half.size(); ++i) {
    half[i] = (half[i] + rotation_value - 'A') % 26 + 'A';
  }
}

std::string merge(std::string& first, std::string& second) {
  std::string decrypted;
  for (int i = 0; i < first.size(); ++i) {
    decrypted.push_back((first[i] + second[i] - 2 * 'A') % 26 + 'A');
  }
  return decrypted;
}

int main() {
  std::string message, first, second;
  std::cin >> message;
  first = message.substr(0, message.size() / 2);
  second = message.substr(message.size() / 2, message.size() - 1);

  rotate(first);
  rotate(second);

  std::cout << merge(first, second) << std::endl;
}
