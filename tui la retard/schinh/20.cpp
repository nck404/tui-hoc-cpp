#include <iostream>
#include <string>

using namespace std;

bool canFormPython(string s) {
    string target = "python";
    int i = 0, j = 0;
    
    while (i < s.length() && j < target.length()) {
        if (s[i] == target[j]) {
            j++;
        }
        i++;
    }
    
    return j == target.length();
}

int main() {
    string s;
    cin >> s;

    if (canFormPython(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
