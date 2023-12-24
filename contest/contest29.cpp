#include <iostream>

using namespace std;

int main(){
    long long n,tong,tam;
    tong = 0;
    tam = 0;
    cin >> n;

    for (int i = 1; i<= n ; i++ ) {

        cin >> tam;
        if (tam % 2 == 0) {
            tong += tam;
        }
    }

    cout << tong;
    return 0;
}
