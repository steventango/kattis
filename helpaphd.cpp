#include <iostream>
#include <string>
#include <sstream>

int main() {
    using namespace std;
    int N;
    string str;
    getline(cin, str);
    stringstream(str) >> N;
    for (int i = 0; i < N; i++) {
      string line;
      getline(cin, line);
      if (line.compare("P=NP") == 0) {
            cout << "skipped" << '\n';
      } else {
        istringstream stream(line);
        string stra, strb;
        getline(stream, stra, '+');
        getline(stream, strb, '+');
        int a = stoi(stra);
        int b = stoi(strb);
        cout << a + int(b) << '\n';
      }
    }
}
