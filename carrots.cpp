#include <iostream>
#include <string>
#include <sstream>

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
