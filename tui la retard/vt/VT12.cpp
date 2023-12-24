#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int timvitri(const vector<long long>& arr) {
    int n = arr.size();
    long long minvl = *min_element(arr.begin(), arr.end());
    long long maxvl = *max_element(arr.begin(), arr.end());


    int chenhlech = abs(minvl - maxvl);
    return chenhlech;
}

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int kq = timvitri(arr);

    cout << kq;

    return 0;
}
