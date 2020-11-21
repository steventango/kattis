#include <iostream>
#include <sstream>
#include <string>

int main() {
  using namespace std;
  int N;
  float sum = 0;
  string str;
  getline(cin, str);
  stringstream(str) >> N;
  for (int i = 0; i < N; i++) {
    string line;
    getline(cin, line);
    stringstream stream(line);
    float a, b;
    stream >> a >> b;
    sum += a * b;
  }
  cout << sum;
}
