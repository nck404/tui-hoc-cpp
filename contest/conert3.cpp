#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        if (N % 2 == 0) {
            cout << "EVEN" << endl;
        } else {
            cout << "ODD" << endl;
        }
    }

    return 0;
}
