#include<bits/stdc++.h>
using namespace std;
int a[12];
set<int> ss;
int main()
{
    int ans,n;
    cin>>n;
    ans=0;
    ss.clear();
    for(int i=0;i<n;++i)
        cin>>a[i];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            int t=a[i]*10+a[j];
            if(i!=j && ss.find(t)==ss.end()){
                ans+=t;
                ss.insert(t);
            }
        }
    }
    cout<<ans;
    return 0;
}
