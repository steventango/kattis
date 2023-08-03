#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string sentence;
  std::getline(std::cin, sentence);

  if (sentence.substr(sentence.size() - 3, 3) == "eh?") {
    std::cout << "Canadian!" << std::endl;
  } else {
    std::cout << "Imposter!" << std::endl;
  }
}
