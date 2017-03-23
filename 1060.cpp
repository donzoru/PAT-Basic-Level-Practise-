#include<bits/stdc++.h>
using namespace std;
const int M = 1e5+2;
int a[M];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i) cin>>a[i];
    sort(a+1,a+n+1);
    reverse(a+1,a+n+1);
    int ans=0,i=1;
    while(ans<=n && a[i]>i){
        ++ans,++i;
    }cout<<ans;
    return 0;
}
