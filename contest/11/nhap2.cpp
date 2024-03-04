#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Sinh_ke_tiep(string &st) {
    int j = st.length();
    while (st[0] == '1') {
        st[j - 1] = '0';
        j--;
    }
    st[j - 1] = '1';
}

int Dem_so_luong_xau(string st) {
    int count = 0;
    while (st.find("11") == string::npos) {
        count++;
        Sinh_ke_tiep(st);
    }
    return count;
}

int main() {
    ifstream cin("INPUT.inp");
    ofstream cout("OUTPUT.OUT");

    int N;
    cin >> N;

    string st(N, '0');
    int result = Dem_so_luong_xau(st);
    cout << result << endl;

    return 0;
}
