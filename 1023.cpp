#include<bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
    memset(a,0,sizeof(a));
    for(int i=0;i<10;++i)
        cin>>a[i];
    for(int i=1;i<10;++i)
    if(a[i]) {
        cout<<i;--a[i];break;
    }
    for(int i=0;i<10;++i)
        while(a[i]) cout<<i,--a[i];
    return 0;
}
