#include<cstdio>
#include<cstring>
const int M = 1e5+5000;
int p[M];
int t;
void init()
{
    t=0;
    memset(p,0,sizeof(p));
    for(int i=2;i<M;++i){
        if(p[i]==0) p[t++]=i;
        for(int j=0;j<t && i*p[j]<M;++j){
            p[p[j]*i]=1;
            if(i%p[j]==0) break;
        }
    }
}
int main()
{
    init();
    int s,e;
    while(scanf("%d%d",&s,&e)!=EOF){
        for(int i=s-1,k=0;i<e;++i){
            printf("%d%c",p[i],(i==e-1 || k==9)?'\n':' ');
            if(++k==10) k=0;
        }
    }
    return 0;
}
