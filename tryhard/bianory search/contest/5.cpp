#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    long long N;
    cin >> N;
    unordered_map<long long , long long> dem;

    for (long long i = 0; i < N; ++i) {
        long long num;
        cin >> num;
        dem[num]++;
    }

    long long  m = 0;
    long long  max = 0;

    for (const auto& e : dem) {
        if (e.second > max || (e.second == max && e.first < m)) {
            m = e.first;
            max = e.second;
        }
    }

    cout << m << " " << max << endl;

    return 0;
}
