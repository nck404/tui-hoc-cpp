#include <iostream>
using namespace std;

int main() {
    int a, b, r;
    
    cin >> a;
    cin >> b;
    
    r = a % b;
    
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    
    cout << b;
    
    return 0;
}
