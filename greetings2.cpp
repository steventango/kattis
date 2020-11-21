#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    std::cout << 'h' << std::string(s.size()*2-4, 'e') << 'y' << std::endl;
}
