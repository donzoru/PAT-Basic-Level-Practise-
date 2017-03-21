#include<bits/stdc++.h>
using namespace std;
const int M = 1e5+2;
int a[M],b[M];
vector<int> ans;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i) scanf("%d",a+i),b[i]=a[i];
    sort(a,a+n);
    ans.clear();
    int m=0;
    for(int i=0;i<n;++i){
        if(a[i]==b[i] && b[i]>m){
            ans.push_back(b[i]);
            m=b[i];
        }if(b[i]>m) m=b[i];
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();++i)
        printf("%d%c",ans[i],i==ans.size()-1?'\n':' ');
    if(ans.size()==0) puts("");
    return 0;
}
