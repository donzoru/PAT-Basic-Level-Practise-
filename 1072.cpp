#include<bits/stdc++.h>
using namespace std;
int n,m,b;
set<string> ss;
string s,t;
int x,y;
int main(){
    scanf("%d%d",&n,&m);
    x=y=0;
    for(int i=0;i<m;++i) cin>>s,ss.insert(s);
    for(int i=0;i<n;++i){
        cin>>s>>b;
        vector<string> ans;
        while(b--){
            cin>>t;
            if(ss.find(t)!=ss.end())
                ans.push_back(t);
        }
        if(ans.size()){
            cout<<s<<':';
            y+=ans.size();
            ++x;
            for(int i=0;i<ans.size();++i) cout<<' '<<ans[i];
            puts("");
        }
    }
    printf("%d %d\n",x,y);
    return 0;
}
