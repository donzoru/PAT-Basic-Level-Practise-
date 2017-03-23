#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    sort(a.begin(),a.end());
    n=a[0];
    for(int i=1;i<a.size();++i) n=n+a[i]>>1;
    cout<<n;
    return 0;
}
