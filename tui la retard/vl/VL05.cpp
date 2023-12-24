

#include <bits/stdc++.h>

using namespace std;

int main()

{

int n,t=0;

cin>>n;

for (int i=1; i<=3*n+1; i++)

if (i%2==1) t+=i;

else t-=i;

cout<<t;

}
