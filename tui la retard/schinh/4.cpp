#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string S;
    getline(cin, S);
    
    map<char, int> count_map;
    for (char c : S) {
        count_map[c]++;
    }

    char mac = 'A';
    char mic = 'A';
    int maxs = 0;
    int mins = S.size();
    
    for (auto it : count_map) {
        if (it.second > maxs) {
            maxs = it.second;
            mac = it.first;
        }
        if (it.second < mins) {
            mins = it.second;
            mic = it.first;
        }
    }
    
    for (auto it : count_map) {
        if (it.second == maxs && it.first > mac) {
            mac = it.first;
        }
        if (it.second == mins && it.first > mic) {
            mic = it.first;
        }
    }
    
    cout << mac << " " << maxs << endl;
    cout << mic << " " << mins << endl;
    
    return 0;
}
