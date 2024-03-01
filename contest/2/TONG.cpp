#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream inf("TONG.INP");
    ofstream ouf("TONG.OUT");
	long long n,t;t =0;
	inf >> n;
	for (long long i = 1; i <= n; ++i)
	{
		t = t + 2*i;
	}
	ouf << t;
	return 0;
}