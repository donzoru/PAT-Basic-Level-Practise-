#include<bits/stdc++.h>
using namespace std;
const int M = 1e5+3;
typedef long long ll;
ll a[M];
ll n,p;
int calu()
{
    int res=0;
    int i=0,j=0;
    while(i<n){
        while(a[i]*p>=a[j] && j<n) ++j;
        res=max(res,j-i);
        ++i;
    }
    return res;
}
int main()
{
    cin>>n>>p;
    for(int i=0;i<n;++i) cin>>a[i];
    sort(a,a+n);
    cout<<calu();
    return 0;
}
/*
10 8
2 3 20 4 5 1 6 7 8 9
*/
