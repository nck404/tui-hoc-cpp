#include <iostream>

using namespace std;


long long giaithua(int num) {
    int result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}
int main(){
    long long n,tong;
    tong = 0;

    cin >> n;

    for (int i = 1; i<= n ; i++ ) {

        tong = tong + giaithua(i);
    }

    cout << tong;
    return 0;
}

