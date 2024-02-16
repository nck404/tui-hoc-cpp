#include <iostream>

using namespace std;

int main() {
	long long n,tong,tam;
	cin >> n;
	while (n > 0) {
		tam = n % 10;
		n = n / 10;
		tong = tong + tam;
	}
	cout << tong;
}