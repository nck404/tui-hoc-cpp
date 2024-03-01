#include <iostream>
#include <vector>


using namespace std;

int main() {
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long n,s;cin >> n;
    int j = 0,l = -1;
    int f[n+1];
    for (int i=1;i<=n;i++){
        cin >> f[i];
        f[i] += f[i-1];
    }

    cin >> s;
    for (int i=1;i<=n;i++){
        while (f[i]-f[j]>s) j++;
        if ((f[i]-f[j])==s) {
            l = max(l,i-j);
            j++;
        }
    }
    cout << l;
    return 0;
}
