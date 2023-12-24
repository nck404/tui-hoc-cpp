#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int N,d;
    cin >> N;
    d = 1;
    vector<char> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<pair<char, int>> db;
    for (int i = 0; i < N; i++) {
        bool found = false;
        for (int j = 0; j < db.size(); j++) {
            if (db[j].first == A[i]) {
                db[j].second++;
                found = true;
                break;
            }
        }
        if (!found) {
            db.push_back(make_pair(A[i], 1));
        }
    }
    cout << db.size() << endl;
    for (int i = 0; i < db.size(); i++) {
        cout << db[i].first << " " << db[i].second << endl;
    }
    return 0;
}

