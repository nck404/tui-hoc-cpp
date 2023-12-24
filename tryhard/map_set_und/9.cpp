#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    set<int> elements;
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        elements.insert(num);
    }
    for (int i = 0; i < M; ++i) {
        int num;
        cin >> num;
        elements.insert(num);
    }

    vector<int> result(elements.begin(), elements.end());
    sort(result.rbegin(), result.rend());

    for (const int& element : result) {
        cout << element << " ";
    }

    return 0;
}
