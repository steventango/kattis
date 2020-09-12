#include <iostream>
#include <string>

int main() {
    using namespace std;
    int x, y, Q;
    cin >> x >> y;
    Q = x > 0 ? 1 : 2;
    Q += y > 0 ? 0 : 1;
    cout << Q << endl;
}
