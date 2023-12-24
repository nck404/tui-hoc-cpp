
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int timuoc(long long n) {
    int count = 0;
    for (long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            count += 2;
            if (i == n / i) {
                count--;
            }
        }
    }
    return count;
}
int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (long long i = 0; i < n; i++) {
        int uocs = timuoc(a[i]);
        cout << uocs << endl;
    }
    return 0;
}



// #include <iostream>
// #include <vector>
// using namespace std;
// int timuoc(long long n) {
//     long long  count = 0;
//     for (long long i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             count++;
//         }
//     }
//     return count;
// }
// int main() {
//     long long n;
//     cin >> n;
//     vector<long long> a(n);
//     for (long long i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     for (long long i = 0; i < n; i++) {
//         long long uocs = timuoc(a[i]);
//         cout <<uocs<< endl;
//     }
//     return 0;
// }
