#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream inf("TUDAI.INP");ofstream ouf("TUDAI.OUT");
    string s;getline(inf, s);
    int w = 0;
    string wp = "";string we = "";
    for (char &c : s) {
        if (c != ' ') we += c;
        else {
            if (we.length() > w) {
                w = we.length();
                wp = we;
            }
            we = "";
        }
    }
    if (we.length() > w) {
        w = we.length();
        wp = we;
    }
    ouf << w << endl;ouf << wp << endl;
    inf.close();ouf.close();
    return 0;
}

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main() {
//     ifstream inf("TUDAI.INP"); ofstream ouf("TUDAI.OUT"); string s; getline(inf, s); int w = 0; string wp = ""; string we = ""; for (char &c : s) { if (c != ' ') we += c; else { if (we.length() > w) { w = we.length(); wp = we; } we = ""; } } if (we.length() > w) { w = we.length(); wp = we; } ouf << w << endl; ouf << wp << endl; inf.close(); ouf.close(); return 0;
// }
