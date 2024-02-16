#include <iostream>
using namespace std;
int main() {
    int n, k;

    cin >> n >> k;


    int a = 0;  
    int b = 1;  
    int result = n;  
    for (int i = 2; i <= k*2; ++i) {
        int temp = b;
        b += a;
        a = temp;
        result += b * n;
    }

    cout <<  result << endl;

    return 0;
}
