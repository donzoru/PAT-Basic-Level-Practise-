#include<bits/stdc++.h>
using namespace std;
string a,b;
int num[128];
int main()
{
    cin>>a;
    memset(num,0,sizeof(num));
    for(int i=0;a[i];++i)
        if(isalpha(a[i])) a[i]=toupper(a[i]),++num[a[i]];
        else if(a[i]=='_') ++num[a[i]];
        else if(isdigit(a[i])) ++num[a[i]];
    cin>>b;
    for(int i=0;b[i];++i)
        if(isalpha(b[i])) --num[toupper(b[i])];
        else if(b[i]=='_') --num[b[i]];
        else if(isdigit(b[i])) --num[b[i]];
    for(int i=0;a[i];++i)
        if(num[a[i]]) cout<<a[i],num[a[i]]=0;
    return 0;
}
