#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, x, y;
    getline(cin, s);getline(cin, x);getline(cin, y);

    long long req = 0;
    size_t pos = s.find(x);
    while (pos != string::npos) {
        s.replace(pos, x.length(), y);
        req++;
        pos = s.find(x, pos + y.length());
    }
    cout <<req << endl;
    cout <<s << endl;
}
