#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

long long arr[1000011];
long long ukm[1000011];

int main() {
    long n;
    cin  >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        ukm[arr[i]] ++;
    }
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
    vector<long long> result;
    for (int i = 0; i < n; i++) {
        if (!marked[i]) {
            result.push_back(arr[i]);
        }
    }
    cout << result.size() << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " " << ukm[result[i]] << endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+1;
int n, x, f = 0, a[N], b[N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a[x]++;
        if (a[x] == 1) b[f++] = x;
    }
    cout << f << endl;
    for (int i = 0; i < f; i++) cout << b[i] << " " << a[b[i]] << endl;
}





/*
#include <iostream>


int main() {
    long long n;
    cin >> n;

    long long arr[1000011];
    long long ukm[1000011] = {0};

    for (long long i = 0; i < n; i++) {
        std::cin >> arr[i];
        ukm[arr[i]]++;
    }

    bool marked[1000011] = {false};
    for (long long i = 0; i < n; i++) {
        if (!marked[i]) {
            for (long long j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    marked[j] = true;
                }
            }
        }
    }

    long long result[1000011];
    long long resultSize = 0;
    for (long long i = 0; i < n; i++) {
        if (!marked[i]) {
            result[resultSize++] = arr[i];
        }
    }

    cout << resultSize << endl;
    for (long long i = 0; i < resultSize; i++) {
        cout << result[i] << " " << ukm[result[i]] << endl;
    }
l;
    return 0;
}

*\
