#include<bits/stdc++.h>
using namespace std;
set<int>m;
int calu(int n)
{
    int res=0;
    while(n){
        res+=n%10;
        n/=10;
    }
    return res;
}
int main()
{
    int n;
    m.clear();
    int a;
    cin>>n;
    while(n--){
        cin>>a;
        m.insert(calu(a));
    }
    vector<int>ans;
    for(auto it=m.begin();it!=m.end();++it)
        ans.push_back(*it);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();++i)
        cout<<ans[i]<<(i==ans.size()-1?'\n':' ');
    return 0;
}
