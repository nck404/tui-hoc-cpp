#include <bits/stdc++.h>
#include <iostream>
using namespace std;
long long xuat_hien(string s,char x) {
  long long d;
  d = 0;
  for (int i = 0; i < s.size(); ++i) if (s[i] == x) d++;
  return d;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  string s1,s;getline(cin,s1);   
  for(char c : s1) s += tolower(c);
  long long n; cin >> n; 
  cin.ignore();
  char p[n];
  for (long long i = 0; i < n; ++i) 
  {
    cin >> p[i];
    p[i] = tolower(p[i]);
  }
  for (int i = 0; i < n; ++i) cout << xuat_hien(s,p[i]) << endl;
  
  return 0;
}