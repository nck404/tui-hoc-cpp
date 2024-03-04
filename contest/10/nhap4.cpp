#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int countTernaryStrings(int n) {
    vector<long long> dp(n + 1, 0);
    dp[1] = 2; // Khởi tạo cho trường hợp có độ dài 1
    dp[2] = 4; // Khởi tạo cho trường hợp có độ dài 2

    for (int i = 3; i <= n; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD; // Số lượng xâu có độ dài i không có 2 ký tự '1' liên tiếp
        dp[i] = (dp[i] * 2) % MOD; // Số lượng xâu có độ dài i không có 2 ký tự '1' liên tiếp
    }

    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout << countTernaryStrings(n) << endl;
    return 0;
}
    