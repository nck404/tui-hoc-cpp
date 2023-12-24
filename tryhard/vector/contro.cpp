#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<pair<int, int>, int>> points(N);

    for (int i = 0; i < N; i++) {
        cin >> points[i].first.first >> points[i].first.second >> points[i].second;
    }

    vector<int> sums(N);

    for (int i = 0; i < N; i++) {
        sums[i] = points[i].first.first + points[i].first.second + points[i].second;
    }

    for (int i = 0; i < N; i++) {
        cout << sums[i] << " ";
    }

    return 0;
}
