#include <iostream>
#include <set>

using namespace std;

int main() {
    int N;
    cin >> N;

    set<pair<int, int>> uniquePoints;

    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        uniquePoints.insert(make_pair(x, y));
    }

    cout << uniquePoints.size() << endl;

    return 0;
}
