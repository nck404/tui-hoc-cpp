#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inf("SOUOC.INP");
    ofstream ouf("SOUOC.OUT");
	long long n,t;t =0;
	inf >> n;
	for (long long i = 1; i <= n % 1000000000000000; ++i)
	{
		if ((i % 2 != 0) && (n % i == 0))
		{
			t++;
		}
	}
	ouf << t;
	return 0;
}