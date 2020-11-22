#include <iostream>

int main() {
  std::string month, date;
  std::cin >> month >> date;
  if (month == "OCT" && date == "31" || month == "DEC" && date == "25") {
    std::cout << "yup" << std::endl;
  } else {
    std::cout << "nope" << std::endl;
  }
}
