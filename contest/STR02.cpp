#include <bits/stdc++.h>
#include <iostream>
#include <cctype>
using namespace std;
string juan_hoa(string s) {
    for (int i = 1; i < s.size(); ++i)
    {
        if ( ( isalpha(s[i]) ) && (s[i-1] == ' ') ) s[i] = toupper(s[i]);
          
    }
  return s;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  long long n ; cin >> n;
  cin.ignore(); string s[n];
  for (int i = 0; i < n; ++i) 
 {
    string tam;
    getline(cin,tam); 
    for(char c : tam) s[i] += tolower(c);
 }

  for (int i = 0; i < n; ++i) {
    if (isalpha(s[i][0]) ) s[i][0] = toupper(s[i][0]);
  
      cout << juan_hoa(s[i]) << endl;
     }
  return 0;
}