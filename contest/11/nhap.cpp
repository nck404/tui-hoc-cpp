#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Sinh_ke_tiep(string &st) {
    int i = st.length();
    while (st[0] == '2') {
        st[i - 1] = '0';
        i--;
    }
    st[i - 1] = char(st[i - 1] + 1);
}

bool Check(string &st) {
    for (int i = 0; i < st.length() - 1; i++) {
        if (st[i] == '1' && st[i + 1] == '1') {
            return false;
        }
    }
    return true;
}

int main() {
    ifstream cin("TAMPHAN.INP");
    ofstream cout("TAMPHAN.OUT");
    
    int N;
    cin >> N;

    string st(N, '0');
    int count = 0;
    while (st.find('2') == string::npos && st.find('0') != string::npos) {
        if (Check(st)) {
            count++;
        }
        Sinh_ke_tiep(st);
    }

    cout << count << endl;

    return 0;
}
