#include <iostream>
#include <fstream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    ifstream inf("KTDD.INP");
    ofstream ouf("KTDD.OUT");
    string s;
    inf >> s;
    unordered_set<char> fs;
    for (char c : s) fs.insert(c);
    for (char c : fs) ouf << c << " ";
    return 0;
}
