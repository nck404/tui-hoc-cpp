// #include <iostream>
// #include <fstream>
// #include <algorithm>

// using namespace std;
// int bs(long long arr[], int n, int x) {
//     int l = 0, r = n;
//     while (l <= r) {
//         int g = l + (r - l) / 2;
//         if (arr[g] == x) {
//             return 1; 
//         } else if (arr[g] < x) {
//             l = g + 1;
//         } else {
//             r = g - 1;
//         }
//     }

//     return 0; 
// }
// int main() {
//     ifstream inf("REHALL.INP");ofstream ouf("REHALL.OUT");
//     long long n;
//     inf >> n;
//     long long a[n],b[n],c[n];
//     for (int i = 0; i < n; ++i)
//     {
//         inf >> a[i] >> b[i] >> c[i] ; 
//     }
//     long long tong; tong =0;
//     for (int i = 0; i < n; ++i) { 
//         if ((bs(a,n,b[i]) == 0) and (bs(b,n,a[i])) == 0)
//         {
//             tong += c[i];
//             continue;
//         } else if (( bs(a,n,b[i]) == 1) or (bs(b,n,a[i])) == 1 )  {
//             tong += c[i];
//             break;
//         }
//     }
//     ouf << tong;
//     inf.close();ouf.close();
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
int bs(long long arr[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int g = l + (r - l) / 2;
        if (arr[g] == x) {
            return 1; 
        } else if (arr[g] < x) {
            l = g + 1;
        } else {
            r = g - 1;
        }
    }

    return 0; 
}
struct mang {
    int a;
    int b;
    int c;
};
bool cmp(const mang &a, const mang &b) {
    return a.b < b.b;
}

int main() {
   ifstream inf("REHALL.INP");ofstream ouf("REHALL.OUT");
    int n;      
    inf >> n;
    vector<mang> v(n);
    for (int i = 0; i < n; ++i) {
        inf >> v[i].a >> v[i].b >> v[i].c;
    }
    sort(v.begin(), v.end(), cmp);
    int e = 0;
    int p = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i].a >= p) {
            e += v[i].c;
            p = v[i].b;
        } 
    }
    ouf << e ;
    return 0;
}
