#include <iostream>

using namespace std;

int main() {

    long long n ,s ;


    s = 0;
    cin >> n ;
    for (long long i = 1; i<=n ; i++) {
        s = s+i;
    }

    cout << s ;

    return 0;

}

