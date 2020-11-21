#include <cmath>
#include <iostream>

int main() {
  using namespace std;
  int N, X = 0;
  cin >> N;
  while (N--) {
    int P;
    cin >> P;
    X += pow(P / 10, P % 10);
  }
  cout << X;
}
