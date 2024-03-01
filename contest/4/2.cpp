#include <iostream>
#include <unordered_map>
#include <fstream>
using namespace std;

int main() {

    ifstream inf("TNV.INP");ofstream ouf("TNV.OUT");

    int n;
    inf >> n;

  
    unordered_map<int, int> a;

    int max_a = 0;
    int p = -1;
    for (int i = 0; i < n; ++i) {
        int tam;
        inf >> tam;
        a[tam]++;
        if (a[tam] > max_a || (a[tam] == max_a && tam > p)) {
            max_a = a[tam];
            p = tam;
        }
    }

    ouf << p << " " << max_a << endl;

    return 0;
}
