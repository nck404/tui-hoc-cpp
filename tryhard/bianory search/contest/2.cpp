#include <iostream>
#include <algorithm>

using namespace std;


bool cmp(long long a, long long b){
    return abs(a) < abs(b);
}

int main(){
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    stable_sort(a, a + n, cmp);
    for(long long i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
