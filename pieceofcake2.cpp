#include <iostream>
#include <string>
#include <sstream>

int main() {
    using namespace std;
    int n, h ,v;
    string str;
    getline(cin, str);
    istringstream stream(str);
    stream >> n >> h >> v;
    cout << max(h, n-h) * max(v, n-v) * 4;
}
