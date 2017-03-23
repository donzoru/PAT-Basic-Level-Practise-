#include<bits/stdc++.h>
using namespace std;
set<string> s;
map<string,string> m;
int main()
{
    int n;
    string a,b;
    cin>>n;
    s.clear();
    m.clear();
    while(n--){
        cin>>a>>b;
        m[a]=b;
        m[b]=a;
    }cin>>n;
    while(n--){
        cin>>a;
        s.insert(a);
    }
    vector<string> ans;
    for(auto i=s.begin();i!=s.end();++i){
        if(s.find(m[*i])!=s.end()) continue;
        ans.push_back(*i);
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();++i)
        cout<<ans[i]<<(i==ans.size()-1?'\n':' ');
    return 0;
}
