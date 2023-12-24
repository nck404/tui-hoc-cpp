
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> points(N);

    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }

    vector<double> distances(N);

    for (int i = 0; i < N; i++) {
        distances[i] = sqrt(pow(points[i].first, 2) + pow(points[i].second, 2));
    }

    cout << fixed << setprecision(2);
    for (int i = 0; i < N; i++) {
        cout << distances[i] << " ";
    }

    return 0;
}
