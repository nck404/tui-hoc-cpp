#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<pair<int, int>, int>> points(N);

    for (int i = 0; i < N; i++) {
        cin >> points[i].first.first >> points[i].first.second >> points[i].second;
    }

    int sum_x = 0, sum_y = 0, sum_z = 0;

    for (int i = 0; i < N; i++) {
        sum_x += points[i].first.first;
        sum_y += points[i].first.second;
        sum_z += points[i].second;
    }

    cout << sum_x << " " << sum_y << " " << sum_z << " ";

    return 0;
}
