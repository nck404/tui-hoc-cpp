#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>


using namespace std;
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= std::sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    vector<bool> marked(n, false);
    for (int i = 0; i < n; i++) {
        if (!marked[i]) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    marked[j] = true;
                }
            }
        }
    }

    vector<int> result;
    for (int i = 0; i < n; i++) {
        if (!marked[i]) {
            result.push_back(arr[i]);
        }
    }

    for (int i = 0; i < result.size(); i++) {
        if (isPrime(result[i])) {
            cout << result[i] << " ";
        }
    }

    return 0;
}
