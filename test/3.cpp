#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    long long N, K;
    cin >> N >> K;
    set<long long> A, B;
    while (K > N) cin >> K;
    for (long long i = 0; i < K; ++i) {
        long long tam;
        cin >> tam;
        A.insert(tam);
    }
    for (long long i = 0; i < K; ++i) {
        long long tam;
        cin >> tam;
        B.insert(tam);
    }
    vector<long long> kq;
    for (long long tam : A) {
        if (B.find(tam) != B.end()) {
            kq.push_back(tam);
        }
    }
    for (const long long& e : kq) {
        cout << e << " ";
    }
    return 0;
}
