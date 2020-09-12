#include <iostream>
#include <string>

int main() {
    using namespace std;
    char str[3];
    cin >> str;
    int N = stoi(str);
    for (int i = 0; i < N; i++) {
        cout << to_string(i + 1) + " Abracadabra\n";
    }
}
