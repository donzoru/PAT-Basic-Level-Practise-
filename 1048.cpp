#include<bits/stdc++.h>
using namespace std;
string a,b;
char rec(int t)
{
    if(t<10) return t+'0';
    switch(t){
        case 10:return 'J';
        case 11:return 'Q';
        case 12:return 'K';
    }
}
int main()
{
    cin>>a>>b;
    while(b.length()<a.length()) b.insert(b.begin(),'0');
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int e=min(a.length(),b.length());
    for(int i=0;i<e;++i){
        if(!(i&1)){
            int t=(a[i]-'0'+b[i]-'0')%13;
            b[i]=rec(t);
        }else {
            int t=b[i]-a[i];
            if(t<0) t+=10;
            b[i]=t+'0';
        }
    }
    for(int i=b.length()-1;i>=0;--i)
        cout<<b[i];
    return 0;
}
