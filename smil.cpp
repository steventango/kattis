#include <iostream>
#include <regex>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string line;
  std::cin >> line;

  const std::regex smil_regex("(:\\)|;\\)|:-\\)|;-\\))");

  for (std::sregex_iterator i =
           std::sregex_iterator(line.begin(), line.end(), smil_regex);
       i != std::sregex_iterator(); ++i) {
    std::smatch match = *i;
    std::cout << match.position() << std::endl;
  }
}
