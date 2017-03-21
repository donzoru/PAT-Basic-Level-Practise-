#include<bits/stdc++.h>
using namespace std;
struct ifo{
    int add,num,nex,pre;
}aa[100005];
int main()
{
    int beg,add,n,k;
    cin>>beg>>n>>k;
    for(int i=0;i<n;++i){
        cin>>add;
        aa[add].add=add;
        cin>>aa[add].num>>aa[add].nex;
    }
    cout<<endl;
    for(int i=beg,j;i!=-1;j=i,i=aa[i].nex)
    for(int i=beg;i!=-1;i=aa[i].nex)
        printf("%05d %d %05d\n",aa[i].add,aa[i].num,aa[i].nex);
    cout<<endl;
    for(int i=beg;i+4>=n;i=aa[i+3].nex){
        int j=i+3;
        for(;j>=i;j=aa[j].)
    }
}
