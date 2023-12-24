
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long x = sqrt(n);
     if ((long long) (x*x == n))  {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
};
