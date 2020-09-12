#include <iostream>
using namespace std;

int main() {
    int n, t, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t < 0) {
            c++;
        }
    }
    cout << c << endl;
}
