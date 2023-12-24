#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;

    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }

    return true;
}



/*
int main() {
    unordered_map<int, int> primeCount;
    vector<int> input;

    int num;
    while (cin >> num) {
        input.push_back(num);
    }

    for (int num : input) {
        if (isPrime(num)) {
            primeCount[num]++;
        }
    }

    for (int num : input) {
        if (primeCount.find(num) != primeCount.end()) {
            cout << num << " " << primeCount[num] << endl;
            primeCount.erase(num);
        }
    }

    return 0;
}

*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MAX_N = 1000000;
int num;


int main() {
    vector<int> counts(MAX_N + 1, 0);
    while (cin >> num) {
        if (isPrime(num)) {
            counts[num]++;
        }
    }

    for (int i = 2; i <= MAX_N; i++) {
        if (counts[i] > 0) {
            cout << i << " " << counts[i] << endl;
        }
    }

    return 0;
}



