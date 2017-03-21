#include<bits/stdc++.h>
using namespace std;
map<char,int>mapp;
string a,b;
int main()
{
    cin>>a>>b;
    mapp.clear();
    for(int i=0;a[i];++i)
        ++mapp[a[i]];
    int n=b.size();
    for(int i=0;b[i];++i)
        if(mapp[b[i]]) --mapp[b[i]],--n;
    if(n==0) cout<<"Yes "<<a.size()-b.size();
    else cout<<"No "<<n;
    return 0;
}
