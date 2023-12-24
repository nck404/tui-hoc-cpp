#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int sum = 0;
    int maxLength = -1;
    unordered_map<int, int> prefixSum;
    prefixSum[0] = -1;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        sum = (sum + num) % K;

        if (sum < 0) {
            sum += K;
        }

        if (prefixSum.find(sum) != prefixSum.end()) {

            maxLength = max(maxLength, i - prefixSum[sum]);
        } else {
            prefixSum[sum] = i;
        }
    }

    if (maxLength == -1) {
        cout << -1 << endl;
    } else {
        cout << maxLength << endl;
    }

    return 0;
}
