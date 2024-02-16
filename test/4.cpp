#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
	long long tam;
	string s;
	getline(cin,s);
	
	for (long long i =0 ; i < s.size() ; i++)
	{
		if (s[i] == ' ')
		{
			s.erase(i,1);
		}
	}
	cout << s << endl;

	long long f[s.size()] = {0};

	 for (long long i = 0; i < s.length(); i++) {
	    f[s[i]]++;
	 }
	 for (long long i = 0; i < s.size(); i++) {
	   if (f[i] = 1) {
	      tam ++;
	   }
	}
	cout << tam;
}