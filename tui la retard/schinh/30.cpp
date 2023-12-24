#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const string &a, const string &b) {
    if (a.length() == b.length()) {
        return a > b;
    }
    return a.length() > b.length();
}

int main() {
    string s;
    getline(cin, s);

    vector<string> numbers;
    string current_number;

    for (char c : s) {
        if (isdigit(c)) {
            current_number += c;
        } else {
            if (!current_number.empty()) {
                if (!(current_number.size() > 1 && current_number[0] == '0')) {
                    numbers.push_back(current_number);
                }
                current_number.clear();
            }
        }
    }

    if (!current_number.empty()) {
        if (!(current_number.size() > 1 && current_number[0] == '0')) {
            numbers.push_back(current_number);
        }
    }

    sort(numbers.begin(), numbers.end(), cmp);

    string largest_number;
    for (const string &num : numbers) {
        largest_number += num;
    }

    if (largest_number.empty()) {
        cout << "0" << endl;
    } else {
        cout << largest_number << endl;
    }

    return 0;
}
