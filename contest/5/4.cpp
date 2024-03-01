#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inf("TUDAI.INP");
    ofstream ouf("TUDAI.OUT");

    string s;
    getline(inf, s);

    int p = 0;
    string max_w = "";
    int l = 0;
    string w = "";

    for (char &c : s) {
        if (c != 
            ' ') {
            l++;
            w += c;
        } else {
            if (l >= p) {
                p = l;
                max_w = w;
            }
            l = 0;
            w = "";
        }
    }


    if (l > p) {
        p = l;
        max_w = w;
    }

    ouf << p << endl;
    ouf << max_w << endl;

    inf.close();
    ouf.close();
    return 0;
}
