#include<bits/stdc++.h>
using namespace std;
map<char,int>mapp;
map<char,int>::iterator it;
string a;
int main()
{
    mapp.clear();
    getline(cin,a);
    for(int i=0;a[i];++i)
        if(isalpha(a[i])) ++mapp[tolower(a[i])];
    int m=0;
    char c;
    for(it=mapp.begin();it!=mapp.end();++it)
        if(it->second>m) m=it->second,c=it->first;
    cout<<c<<" "<<m;
    return 0;
}
