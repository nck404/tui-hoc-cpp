#include <bits/stdc++.h>
#include <iostream>
using namespace std;
string chx(string s)
{
  string tam = "";bool cach = false;
  for (long long i = 0; i < s.size(); i++)
  {
    if (s[i] == ' ')
    {
      if (cach==false)
      { tam += ' '; cach = true; }
    }
    else { tam += s[i]; cach = false; }
  }
  if (tam[tam.size()+1] == ' ') tam.pop_back();
  if (tam.front() == ' ') tam.erase(0, 1);
  return tam;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  long long t;cin >> t; cin.ignore();
  string s[t];
  for (long long i = 0; i < t; ++i) getline(cin, s[i]);
  for (long long i = 0; i < t; ++i) cout << chx(s[i]) << endl;
  return 0;
}