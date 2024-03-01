#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

long long sl(long long l, long long r, long long x, long long a[]) {
    long long d = 0;
    for (long long i = l - 1; i < r; ++i) {
        if (a[i] > 0 && a[i] < x) {
            d++;
        }
    }
    return d;
}

int main()
{
	ifstream inf("COUNT.INP");
    ofstream ouf("COUNT.OUT");
	long long n,x,q;
	inf >> n >> x >> q;
	long long a[n];
	pair <long long,long long> vtr[q];
	for (long long i = 0; i < n; ++i)
	{
		inf >> a[i];
	}
	long long t1,t2;
	for (long long i = 0; i < q; i++) {
		inf >> t1;inf >> t2;
		vtr[i] = make_pair(t1,t2);
	}
	for (int i = 0; i < q; ++i)
	{
		ouf << sl(vtr[i].first,vtr[i].second,x,a);
	}
	return 0;
}