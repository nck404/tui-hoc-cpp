#include <bits/stdc++.h>
#include <iostream>
#define int long long
#define double long double
using namespace std;
const int maxn=1e5+10;
// const int oo=1e18;
// const int mod=1e9+7;
int n,save[maxn];pair<int,int> a[maxn];
int BS(int l,int r,int val)
{
    int np=-1;
    while(l<=r){
        int g=l+r>>1;
        if(a[g].first>=val){
            r=g-1;
        }
        else{
            np=g;
            l=g+1;
        }
    }
    if(np==-1) np=0;
    return np;
}
 main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++){
        int tmp=BS(1,i-1,a[i].first);
        save[a[i].second]=tmp;
    }
    for(int i=1;i<=n;i++) cout<<save[i]<<" ";
    return 0;
}