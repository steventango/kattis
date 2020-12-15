#include <ctime>
#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> weekdays = {"Sunday",    "Monday",   "Tuesday",
                                       "Wednesday", "Thursday", "Friday",
                                       "Saturday"};
  std::tm time = {};

  std::cin >> time.tm_mday >> time.tm_mon;
  time.tm_mon--;
  time.tm_year = 2009 - 1900;

  std::mktime(&time);

  std::cout << weekdays[time.tm_wday] << std::endl;
}
