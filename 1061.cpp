#include<bits/stdc++.h>
using namespace std;
const int M =100;
int n,m;
int sum,gra[M];
bool ans[M],k;
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;++i) cin>>gra[i];
    for(int i=0;i<m;++i) cin>>ans[i];
    for(int i=0;i<n;++i){
        sum=0;
        for(int j=0;j<m;++j){
            cin>>k;
            if(k==ans[j]) sum+=gra[j];
        }
        cout<<sum<<endl;
    }
    return 0;
}
