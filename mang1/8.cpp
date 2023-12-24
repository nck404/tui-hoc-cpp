#include <iostream>
#include <vector>

std::vector<int> mergeArrays(std::vector<int>& arr1, std::vector<int>& arr2) {
    std::vector<int> mergedArray;
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            mergedArray.push_back(arr1[i]);
            i++;
        } else {
            mergedArray.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n) {
        mergedArray.push_back(arr1[i]);
        i++;
    }

    while (j < m) {
        mergedArray.push_back(arr2[j]);
        j++;
    }

    return mergedArray;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> arr1(n);
    std::vector<int> arr2(m);

    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }

    for (int i = 0; i < m; i++) {
        std::cin >> arr2[i];
    }

    std::vector<int> mergedArray = mergeArrays(arr1, arr2);

    for (int num : mergedArray) {
        std::cout << num << " ";
    }

    return 0;
}
