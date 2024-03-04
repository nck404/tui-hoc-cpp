// https://khmt.123.st/t194-topic
// https://sangkienkinhnghiem.net/liet-ke-xau-nhi-phan-tam-phan-khong-dung-de-quy-va-ap-dung-vao-giai-1-so-bai-toan-liet-ke-quay-lui-3558/
// https://codelearn.io/sharing/thuat-toan-chuoi-nhi-phan-do-dai-n

#include <iostream>
#include <math.h>
using namespace std;
int N;
string a[100009];
long long MOD = 10e9 + 7;
bool check(string s) {
    for (int i = 1; i < s.length(); i++) if (s[i] == '1' && s[i - 1] == '1') return false; 
    return true; 
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> N;
    int n = 3;
    a[0] = "0";
    a[1] = "1";
    a[2] = "2";
    int k = 0;
    while (a[k].length() < N){
        a[n++] = a[k] + "0";
        a[n++] = a[k] + "1";
        a[n++] = a[k] + "2";
        k++;
    }
    long long d = 0;
    for (int i = k; i < n; i++) if (check(a[i])) d++;
    cout << d%MOD;
 }

