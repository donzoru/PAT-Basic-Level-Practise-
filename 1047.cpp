#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
int main()
{
    int n,a,b,c;
    cin>>n;
    m.clear();
    while(n--){
        scanf("%d-%d %d",&a,&b,&c);
        m[a]+=c;
    }
    a=0;
    for(auto i=m.begin();i!=m.end();++i)
        if(i->second>a) a=i->second,b=i->first;
    cout<<b<<' '<<a<<endl;
    return 0;
}
