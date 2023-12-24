#include <iostream>
using namespace std;
int main() {
	long long n,d;
	cin >> n;
	d = 0;
	for (long long i = 1 ; i <= n ; i++ ) {
		if (i % 2 == 0)
		{
			d++;
		}
	}
	cout << d;
	return 0;
}