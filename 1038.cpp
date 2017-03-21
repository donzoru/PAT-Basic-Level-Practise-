#include<bits/stdc++.h>
using namespace std;
map<int,int>mapp;
int main()
{
    int n,a;
    cin>>n;
    while(n--){
        cin>>a;
        ++mapp[a];
    }
    cin>>n;
    while(n--){
        cin>>a;
        cout<<mapp[a]<<(n==0?'\n':' ');
    }
    return 0;
}
