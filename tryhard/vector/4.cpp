#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

    multiset<int> arr;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        arr.insert(num);
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int operation, X;
        cin >> operation >> X;

        if (operation == 1) {
            arr.insert(X);
        } else if (operation == 2) {
            auto it = arr.find(X);
            if (it != arr.end()) {
                arr.erase(it);
            }
        } else if (operation == 3) {
            auto it = arr.find(X);
            if (it != arr.end()) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
