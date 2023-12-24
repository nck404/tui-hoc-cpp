
/*
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, bool> gap; //tao ham danh dau

    int lap = -1;

    for (int i = 0; i < n; i++) {
        if (gap[arr[i]]) {
            lap = arr[i];
            break;
        }
        gap[arr[i]] = true;
    }

    cout << lap << endl;

    return 0;
}

*/



#include <iostream>
using namespace std;

int a[100011],atb[100011];
int main() {
    int n,dup;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        atb[arr[i]]++;
        if (atb[arr[i]] > 1) {
            dup = arr[i];
            break;
        }
    }

    cout << dup;

    return 0;
}
