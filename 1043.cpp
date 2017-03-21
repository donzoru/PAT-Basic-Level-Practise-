#include<bits/stdc++.h>
using namespace std;
string a,b="PATest";
map<char,int>m;
int main()
{
    cin>>a;
    m.clear();
    int n=0;
    for(int i=0;a[i];++i)
        if(b.find(a[i])!=-1) ++m[a[i]],++n;
    for(int i;n;){
        for(i=0;b[i];++i)
            if(m[b[i]]) --n,--m[b[i]],cout<<b[i];
    }
    return 0;
}
