#include <iostream>

int main() {
    using namespace std;
    int x, y, Q;
    cin >> x >> y;
    if (x > 0) {
        Q = y > 0 ? 1 : 4;
    } else {
        Q = y > 0 ? 2 : 3;
    }
    cout << Q << endl;
}
