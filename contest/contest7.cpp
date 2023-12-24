#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;
    vector<int> uocs;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            count++;
            uocs.push_back(i);
        }
    }

    cout << count << endl;

    sort(uocs.begin(), uocs.end());

    for (int i = 0; i < count; i++) {
        cout << uocs[i] << " ";
    }

    return 0;
}
