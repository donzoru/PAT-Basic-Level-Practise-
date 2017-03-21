#include<bits/stdc++.h>
using namespace std;
const int M=1e5+3;
struct ifo{
    int n,sum;
    bool operator<(const ifo & x)const {
        return sum>x.sum;
    }
}li[M];
int main()
{
    int n,a,b;
    cin>>n;
    for(int i=0;i<M;++i)
        li[i].n=li[i].sum=0;
    while(n--){
        cin>>a>>b;
        li[a].n=a;
        li[a].sum+=b;
    }
    sort(li,li+M);
    cout<<li[0].n<<' '<<li[0].sum;
    return 0;
}
