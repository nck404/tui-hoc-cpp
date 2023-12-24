#include <iostream>
#include <string>
using namespace std;

string ck(string N) {

        int s_I = stoi(N.substr(N.size() - 2));
        if (s_I % 3 == 0 and s_I % 5 ==0) return "YES";
        else return "NO";
}

int main() {
    string N;
    cin >> N;
    cout << ck(N) << endl;
    return 0;
}
