#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b;
    int n[4];
    cin>>t;
    a=b=0;
    while(t--){
        for(int i=0;i<4;++i) cin>>n[i];
        n[0]+=n[2];
        if(n[1]==n[3]) continue;
        if(n[1]==n[0]) ++b;
        if(n[3]==n[0]) ++a;
    }
    cout<<a<<' '<<b<<endl;
    return 0;
}
