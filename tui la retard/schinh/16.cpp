#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
string chuanhoa(string name) {
    stringstream ss(name);
    string word;
    string result = "";

    while (ss >> word) {
        if (!result.empty()) {
            result += " ";
        }
        for (int i = 0; i < word.length(); i++) {
            if (i == 0) {
                result += toupper(word[i]);
            } else {
                result += tolower(word[i]);
            }
        }
    }
    
    return result;
}

string datas(string date) {
    stringstream ss(date);
    string token;
    vector<string> tokens;
    
    while (getline(ss, token, '/')) {
        tokens.push_back(token);
    }

    if (tokens.size() != 3) {
        return date; 
    }

    string day = tokens[0];
    string month = tokens[1];
    string year = tokens[2];

    if (day.length() == 1) {
        day = "0" + day;
    }
    
    if (month.length() == 1) {
        month = "0" + month;
    }
    
    return day + "/" + month + "/" + year;
}

int main() {
    string name, date;
    getline(cin, name);
    getline(cin, date);

    string datas1 = chuanhoa(name);
    string d2 = datas(date);

    cout << datas1 << endl;
    cout << d2 << endl;

    return 0;
}
