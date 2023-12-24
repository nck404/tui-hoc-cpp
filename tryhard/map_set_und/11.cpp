#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    set<int> setA, setB;
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        setA.insert(num);
    }
    for (int i = 0; i < M; ++i) {
        int num;
        cin >> num;
        setB.insert(num);
    }

    vector<int> result;
    for (int num : setA) {
        if (setB.find(num) == setB.end()) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    for (const int& element : result) {
        cout << element << " ";
    }

    return 0;
}
