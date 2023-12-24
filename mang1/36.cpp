#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    unordered_set<int> prefixSum;
    bool found = false;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        sum += num;
        if (prefixSum.find(sum) != prefixSum.end() || sum == 0) {
            found = true;
            break;
        }
        prefixSum.insert(sum);
    }

    if (found) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}

