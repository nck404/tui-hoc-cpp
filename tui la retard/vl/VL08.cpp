#include <iostream>

using namespace std;

int main() {

    int a,b,l;

    cin >> a >> b;
    l = 0;

    for (int i = a; i <=b ; i++) {
        if (i % 2 == 0) {
            l = l +  i;
        }
    }

    cout << l;
    return 0;
}



