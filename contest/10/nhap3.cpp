#include <iostream>
#include <math.h>

using namespace std;

int N;

string dt(int n) {
    string ans = "";
    while (n > 0) {
        ans = char(n % 3 + '0') + ans; 
        n /= 3;
    }
    while (ans.length() < N)
        ans = "0" + ans;
    return ans;
}

bool check(string s) {
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == '1' && s[i - 1] == '1') {
            return false; 
        }
    }
    return true; 
}

int main() {
    cin >> N;
    int N_3 = pow(3, N);
    long long count = 0;
    for (int i = 0; i < N_3; i++) {
        string s = dt(i);
        if (check(s)) {
            count++;
        }
    }
    cout << count;
    return 0;
}
