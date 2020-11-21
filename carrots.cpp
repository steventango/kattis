#include <iostream>
#include <sstream>
#include <string>

int main() {
  using namespace std;
  string NP;
  getline(cin, NP);
  istringstream iss(NP);
  string token;
  getline(iss, token, ' ');
  getline(iss, token, ' ');
  cout << token;
}
