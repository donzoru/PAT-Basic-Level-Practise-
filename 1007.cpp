#include<cstdio>
#include<cstring>
const int M = 1e5+3;
int p[M];
int n;
int sol()
{
    int res=0,t=0;
    memset(p,0,sizeof(p));
    for(int i=2;i<=n;++i){
        if(p[i]==0) p[t++]=i;
        for(int j=0;j<t && p[j]*i<=n;++j){
            p[p[j]*i]=1;
            if(i%p[j]==0) break;
        }
    }
    for(int i=1;i<t;++i)
        if(p[i]==p[i-1]+2) ++res;
    return res;
}
int main()
{
    scanf("%d",&n);
    printf("%d\n",sol());
    return 0;
}
