#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,s,e,d;
    cin>>n>>m>>s>>e>>d;
    vector<vector<int> > a(n,vector<int> (m));
    for(int i=0;i<n;++i)
    for(int j=0;j<m;++j){
        cin>>a[i][j];
        if(a[i][j]>=s && a[i][j]<=e) a[i][j]=d;
    }
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
            printf("%03d%c",a[i][j],j==m-1?'\n':' ');
    return 0;
}
