
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    unordered_map<long long, long long> count_map;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        count_map[A[i]] = 1;
    }
    vector<long long> result;
    for (int i = 0; i < M; ++i) {
        int num;
        cin >> num;
        if (count_map[num] == 1) {
            result.push_back(num);
            count_map[num] = 2;
        }
    }
    for (int i = 0; i < N; ++i) {
        if (count_map[A[i]] == 2) {
            cout << A[i] << " ";
        }
    }

    return 0;
}
