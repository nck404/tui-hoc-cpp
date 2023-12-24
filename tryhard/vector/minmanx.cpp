
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> V(N);

    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    int min_value = *min_element(V.begin(), V.end());
    int max_value = *max_element(V.begin(), V.end());
    int sum = accumulate(V.begin(), V.end(), 0);

    cout << min_value << endl;
    cout << max_value << endl;
    cout << sum << endl;

    return 0;
}
