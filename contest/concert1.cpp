
#include <iostream>
using namespace std;

int main() {
    long long  N;
    cin >> N;


    // 1
    for (long long i = 1; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 2
    long long  j = N;
    while (j >= 0) {
        cout << j << " ";
        j--;
    }
    cout << endl;

    //3
    for (long long  k = 0; k <= N; k += 1) {
            if ( k % 2== 0) {
        cout << k << " ";
            }
    }
    cout << endl;

    //4
    for (long long  l = 1; l <= N; l ++) {
            if (l % 2 != 0){
        cout << l << " ";
            }
    }
    cout << endl;

    //5
    for (long long  m = 0; m <= N; m ++) {
            if (m % 4 ==0) {
        cout << m << " ";
            }
    }
    cout << endl;
    //6
    for (char c = 'a'; c < 'a' + N; c++) {
        cout << c << " ";
    }
    cout << endl;
    //7
    for (char c = 'z' - N +1; c <= 'z'; c++) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
