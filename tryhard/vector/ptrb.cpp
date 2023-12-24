
#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> uniqueValues;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;


        if (uniqueValues.find(num) == uniqueValues.end()) {
            cout << num << " ";
            uniqueValues.insert(num);
        }
    }

    cout << endl;

    return 0;
}
