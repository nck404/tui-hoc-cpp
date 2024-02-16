#include <iostream>
#include <algorithm>

using namespace std;

long long tong(long long n){
    long long sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool cmp(long long a, long long b){
    long long sum_a = tong(a);
    long long sum_b = tong(b);

    if (sum_a == sum_b) {
        return a < b;  
    }

    return sum_a < sum_b;
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
