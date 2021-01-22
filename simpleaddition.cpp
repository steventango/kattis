#include <iostream>
#include <sstream>
#include <string>

class BigInt {
 public:
  std::string number;
  BigInt(std::string number = "") { this->number = number; }
  BigInt operator+(const BigInt& rhs) const {
    BigInt result;
    std::string longer;
    std::string shorter;
    if (this->number.size() > rhs.number.size()) {
      longer = this->number;
      shorter = rhs.number;
    } else {
      longer = rhs.number;
      shorter = this->number;
    }

    int carry = 0;
    auto li = longer.rbegin();
    for (auto si = shorter.rbegin(); si != shorter.rend(); li++, si++) {
      int sum = *li + *si + carry - 96;
      carry = sum / 10;
      int add = sum % 10;
      result.number.insert(0, std::to_string(add));
    }
    for (; li != longer.rend(); li++) {
      int sum = *li + carry - 48;
      carry = sum / 10;
      int add = sum % 10;
      result.number.insert(0, std::to_string(add));
    }
    if (carry > 0) {
      result.number.insert(0, std::to_string(carry));
    }
    return result;
  }
  friend std::ostream& operator<<(std::ostream& s, const BigInt& n);
  friend std::istream& operator>>(std::istream& s, BigInt& n);
};

std::ostream& operator<<(std::ostream& s, const BigInt& n) {
  s << n.number;
  return s;
}

std::istream& operator>>(std::istream& s, BigInt& n) {
  s >> n.number;
  return s;
}

int main() {
  BigInt a, b;

  std::cin >> a >> b;
  std::cout << a + b << std::endl;
}
