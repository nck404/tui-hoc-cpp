#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    map<int, int> mdanhdau;

    for (int num : arr) {
        if (mdanhdau.find(num) != mdanhdau.end()) {
            mdanhdau[num]++;
        } else {
            mdanhdau[num] = 1;
        }
    }
    for (auto it = mdanhdau.begin(); it != mdanhdau.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    set<int> seen;
    for (int num : arr) {
        if (seen.find(num) == seen.end()) {
            cout << num << " " << mdanhdau[num] << endl;
            seen.insert(num);
        }
    }

    return 0;
}
