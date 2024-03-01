#include <bits/stdc++.h>
using namespace std;
int r[100002],l[100002],a[100002];
int main() {
ios_base::sync_with_stdio(false);
 cin.tie(nullptr); cout.tie(nullptr);
 int n;cin>>n;
 int ans=0;
 for(int i=1;i<=n;i++) cin >> a[i];
 for(int i=1;i<=n;i++) l[i]=__gcd(l[i-1],a[i]);
 for(int i=1;i<=n;i++) r[i]=__gcd(r[i-1],a[n-i+1]);
 for(int i=1;i<=n;i++) ans=max(ans,__gcd(l[i-1],r[i+1]));
 cout<<ans;
}