#include <iostream>
#include <fstream>

using namespace std;

int snt(long long n) {
    for ( long long i = 2; i*i <= n; i++) {
        if (n % i == 0 ) return 0;
    }
    return n>1;
}
int sod(long long num) {
    long long sum = 0;
    while (num != 0) {
        sum += num % 10;  
        num /= 10;        
    }
    return sum;
}
int main() {

    ifstream infile("PASSWORD.INP");
    long long l, r;
    infile >> l >> r;
    infile.close();
    ofstream outfile("PASSWORD.OUT");
    for (long long i = l; i < r; ++i)
    {
        if ((snt(sod(i))) && (snt(i))) {
            outfile << i << ' ';
        }
    }
    outfile.close();

    return 0;
}
