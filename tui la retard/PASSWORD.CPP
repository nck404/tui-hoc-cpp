#include <iostream>
#include <fstream>

using namespace std;
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
      int N = 1e7;
      bool check[N + 1];
      for (int i = 2; i <= N; i++) {
        check[i] = true;
      }

      for (int i = 2; i <= N; i++) {
        if (check[i] == true) {
          for (int j = 2 * i; j <= N; j += i) {
            check[j] = false;
          }
        }
      }


    long long l, r;
    infile >> l >> r;
    infile.close();
    ofstream outfile("PASSWORD.OUT");
    for (long long i = l; i < r; ++i)
    {
        if (check[i] == true && check[sod(i)] == true) {
            outfile << i << ' ';
        }
    }
    outfile.close();

    return 0;
}
