#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s;
    int ct = 0, cs = 0, cdb = 0;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            ct++;
        }
        if (isdigit(s[i])) {
            cs++;
        }
        if (!isalpha(s[i]) && !isdigit(s[i])) {
            cdb++;
        }
    }
    cout << ct << " " << cs << " " << cdb;
    return 0;
}
