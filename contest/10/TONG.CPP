#include <iostream>
#include <fstream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int  main() {
    ifstream cin("TONG.INP");
    ofstream cout("TONG.OUT");
    string s;
    getline(cin,s);
    for (int i = 0; i < s.size(); ++i) if (isalpha(s[i])) s[i] = ' ';  
    vector<string> v; string number;
    istringstream istringstream(s); long long tong = 0;
    while (istringstream >> number)  v.push_back(number);
    for (int i = 0; i < v.size(); ++i) tong+= stoi(v[i]) cout << tong;
    return 0;
}