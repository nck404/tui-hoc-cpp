#include <iostream>

using namespace std;

int main() {

    int n ,s ;
    s = 0;
    cin >> n ;
    for (int i = 2; i<=n ; i++) {
        s = s+i;
    }

    cout << s;
    return 0;

}
