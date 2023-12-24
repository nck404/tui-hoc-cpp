#include <iostream>
#define ll long long
using namespace std;
string s; long tams,q = 0,res = 0;
void update() {
    if (q == 0) q = 1;
    switch (tams) {
        case 'N':
            res += 14*q;
            break;
        case 'O':
            res += 16*q;
            break;
        case 'H':
            res += q;
            break;
        case 'C':
            res += 12*q;
            break;
        default:
            break;
    }
    q = 0;
}
int main() {
    freopen("PHANTU.INP","r",stdin);freopen("PHANTU.OUT","w",stdout);
    cin >> s;tams = s[0];
    for (long i = 1; i < s.length(); i++) {
        if (s[i] < 48 || s[i] > 57) {
            update();
            tams = s[i];
        } else q = q*10 + (s[i] - 48);
    }
    update();
    cout << res;
    return 0;
}