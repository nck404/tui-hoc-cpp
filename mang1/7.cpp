#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool isOdd(int num) {
    return num % 2 != 0;
}

bool compareOdd(int a, int b) {
    return a > b;
}

bool compareEven(int a, int b) {
    return a < b;
}

void sortArray(vector<int>& arr) {
    vector<int> oddArr;
    vector<int> evenArr;

    for (int num : arr) {
        if (isOdd(num)) {
            oddArr.push_back(num);
        } else {
            evenArr.push_back(num);
        }
    }

    sort(oddArr.begin(), oddArr.end(), compareOdd);
    sort(evenArr.begin(), evenArr.end(), compareEven);

    arr.clear();
    arr.insert(arr.end(), oddArr.begin(), oddArr.end());
    arr.insert(arr.end(), evenArr.begin(), evenArr.end());
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sortArray(arr);

    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
