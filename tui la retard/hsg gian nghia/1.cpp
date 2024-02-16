#include <iostream>
using namespace std;
int main() {

	long long n,e,o;
	cin >> n;
	e = (n % 2 == 0) ? n : n - 2;
    o = (n % 2 == 1) ? n : n + 2;
	cout << e << endl;
	cout << o;
}