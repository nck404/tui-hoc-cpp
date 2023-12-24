
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> c, d;

    for (int i = 0; i < n; i++) {
        if (i == 0 || a[i] != a[i - 1]) {
            c.push_back(a[i]);
        }
    }

    for (int i = 0; i < m; i++) {
        if (i == 0 || b[i] != b[i - 1]) {
            d.push_back(b[i]);
        }
    }


    vector<int> intersection;
    set_intersection(c.begin(), c.end(), d.begin(), d.end(), back_inserter(intersection));

    for (int i = 0; i < intersection.size(); i++) {
        cout << intersection[i] << " ";
    }
    cout << endl;


    vector<int> merged;
    set_union(c.begin(), c.end(), d.begin(), d.end(), back_inserter(merged));

    for (int i = 0; i < merged.size(); i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
