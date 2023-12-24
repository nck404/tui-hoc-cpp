#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr1(n);
    vector<int> arr2(m);


    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> intersection;
    vector<int> union_set;


    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            union_set.push_back(arr1[i]);
            i++;
        } else if (arr1[i] > arr2[j]) {
            union_set.push_back(arr2[j]);
            j++;
        } else {
            intersection.push_back(arr1[i]);
            union_set.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while (i < n) {
        union_set.push_back(arr1[i]);
        i++;
    }

    while (j < m) {
        union_set.push_back(arr2[j]);
        j++;
    }


    for (int k = 0; k < union_set.size(); k++) {
        cout << union_set[k] << " ";
    }
    cout << endl;

    for (int k = 0; k < intersection.size(); k++) {
        cout << intersection[k] << " ";
    }
    cout << endl;

    return 0;
}

