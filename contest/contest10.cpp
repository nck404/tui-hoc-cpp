#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    string ghi_nhan = "NO";

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        if (num == 2022) {
            ghi_nhan = "YES";
            break;
        }
    }

    cout << ghi_nhan << endl;

    return 0;
}
