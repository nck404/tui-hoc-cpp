
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    unordered_map<int, int> prefixSum;
    vector<int> result;

    int sum = 0;
    int maxLength = 0;
    int endIndex = -1;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        sum += A[i];

        if (sum == 0) {
            maxLength = i + 1;
            endIndex = i;
        } else if (prefixSum.find(sum) != prefixSum.end()) {
            if (i - prefixSum[sum] > maxLength) {
                maxLength = i - prefixSum[sum];
                endIndex = i;
            }
        } else {
            prefixSum[sum] = i;
        }
    }

    if (maxLength > 0) {
        for (int i = endIndex - maxLength + 1; i <= endIndex; i++) {
            result.push_back(A[i]);
        }
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "NOT FOUND" << endl;
    }

    return 0;
}
