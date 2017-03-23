#include<bits/stdc++.h>
using namespace std;
set<string> has;
int m,n,s;
vector<string> a;
int main()
{
    has.clear();
    cin>>m>>n>>s;
    a.resize(m);
    bool flag=0;
    for(int i=0;i<m;++i) cin>>a[i];
    if(s<=m) flag=1,cout<<a[s-1]<<endl,has.insert(a[s-1]);
    for(int i=s-1+n;i<m;i+=n){
        while(i<m && has.find(a[i])!=has.end()) ++i;
        if(i<m){
            flag=1;
            has.insert(a[i]);
            cout<<a[i]<<endl;
        }
    }
    if(!flag) puts("Keep going...");
    return 0;
}
