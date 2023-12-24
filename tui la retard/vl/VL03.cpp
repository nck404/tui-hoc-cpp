#include <iostream>

using namespace std;

int main() {

    long long n ,s ;


    s = 0;
    cin >> n ;
    for (long long i = 2; i<=n ; i++) {

        s = s+i;
    }

    cout << s + 2*n;

    return 0;

}
