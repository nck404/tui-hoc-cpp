
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



void sortArray(vector<long long>& arr) {
    int n = arr.size();

    int first = arr[0];
    int last = arr[n - 1];

    sort(arr.begin() + 1, arr.end() - 1);

    arr[0] = first;
    arr[n - 1] = last;
}

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sortArray(arr);


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
