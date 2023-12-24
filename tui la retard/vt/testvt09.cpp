#include <iostream>
#include <math.h>

using namespace std;

int n, x, i; int a[100000001];

bool kt_snt(int x){ int i; if (x == 2) return true; for (i = 2; i <= int(sqrt(x)); i++){ if (x % i == 0) return false; } return true; }

int main(){ cin >> n; for (i = 0; i < n; i++){ cin >> x; if (x > 1) a[x]++; } for (i = 2; i <= 100000000; i++){ if (a[i] != 0){ if (kt_snt(i)) cout << i << " "; } } return 0; }
