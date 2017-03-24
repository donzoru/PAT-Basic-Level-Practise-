#include<bits/stdc++.h>
using namespace std;
string a,b;
int x,y;
int A,B;
int main()
{
    cin>>a>>x>>b>>y;
    A=B=0;
    for(int i=0;a[i];++i)
        if(a[i]-'0'==x) A=A*10+x;
    for(int i=0;b[i];++i)
        if(b[i]-'0'==y) B=B*10+y;
    cout<<A+B<<endl;
    return 0;
}
