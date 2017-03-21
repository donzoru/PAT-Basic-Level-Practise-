#include<bits/stdc++.h>
using namespace std;
const int M = 100003;
struct ifo{
    int v,p;
    bool operator<(const ifo &a )const{
        return v<a.v;
    }
}a[M];
#define lb(i) i&-i
int b[M],c[M];
int n;
vector<int>ans;
void upd(int x)
{
    for(;x<=n;x+=lb(x))
        ++c[x];
}
int get(int x)
{
    int res=0;
    for(;x>0;x-=lb(x))
        res+=c[x];
    return res;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;++i) scanf("%d",&a[i].v),a[i].p=i;
    sort(a,a+n);
    for(int i=0;i<n;++i)
        b[a[i].p]=i+1;
    memset(c,0,sizeof(c));
    ans.clear();
    for(int i=0;i<n;++i){
        if(i==get(b[i]) && i+1==b[i]) {
            //cout<<a[b[i]-1].v<<endl;
            ans.push_back(a[b[i]-1].v);
        }
        upd(b[i]);
    }
    cout<<ans.size()<<endl;
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();++i)
        printf("%d%c",ans[i],i==ans.size()-1?'\n':' ');
    if(ans.size()==0) puts("");
    return 0;
}
