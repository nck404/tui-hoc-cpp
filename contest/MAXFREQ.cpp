#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int arr[1000011];
int ukm[1000011];
int main() {
    int n;
    cin  >> n;



    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        ukm[arr[i]] ++;
    }
        int k,l;
        l = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (ukm[arr[i]] > l) {
                l = ukm[arr[i]];
                k = arr[i];
            }
        }
        cout << k << " " << l;



    return 0;
}
