#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int max = a; // Giả sử số lớn nhất là a

    if (b > max) {
        max = b; // Nếu b lớn hơn max, gán max = b
    }

    if (c > max) {
        max = c; // Nếu c lớn hơn max, gán max = c
    }

    cout << max << endl; // In ra số lớn nhất

    return 0;
}
