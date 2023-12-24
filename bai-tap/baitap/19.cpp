#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int max_length = 1;
    int current_length = 1;
    int start_index = 0;
    int max_start_index = 0;
    for (int i = 1; i < N; i++) {
        if (A[i] != A[i-1]) {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
                max_start_index = start_index;
            }
            current_length = 1;
            start_index = i;
        }
    }
    if (current_length > max_length) {
        max_length = current_length;
        max_start_index = start_index;
    }
    cout << max_length << endl;
    for (int i = max_start_index; i < max_start_index + max_length; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
