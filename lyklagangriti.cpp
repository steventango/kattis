#include <iostream>
#include <string>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::string str;
  std::cin >> str;

  // interestingly a vector is faster than a list here
  std::vector<char> chars;
  std::vector<char>::iterator pos = chars.begin();

  int index = 0;

  for (char c : str) {
    switch (c) {
      case 'B':
        pos--;
        pos = chars.erase(pos);
        break;
      case 'L':
        pos--;
        break;
      case 'R':
        pos++;
        break;
      default:
        pos = chars.insert(pos, c);
        pos++;
        break;
    }
  }

  std::string password(chars.begin(), chars.end());
  std::cout << password << std::endl;
}
