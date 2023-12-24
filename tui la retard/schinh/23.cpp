#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> words(N);

    for (int i = 0; i < N; i++) {
        cin >> words[i];
    }

    sort(words.begin(), words.end(), greater<string>());

    string result = "";

    for (int i = 0; i < N; i++) {
        result += words[i];
    }

    cout << result << endl;

    return 0;
}
