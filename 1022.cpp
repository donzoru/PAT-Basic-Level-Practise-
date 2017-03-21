#include<bits/stdc++.h>
using namespace std;
int a,b,d;
void tra(int n)
{
    stack<char> s;
    int t;
    if(n==0) s.push('0');
    while(n){
        t=n%d;
        n/=d;
        s.push(t+'0');
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}
int main()
{
    cin>>a>>b>>d;
    tra(a+b);
    return 0;
}
