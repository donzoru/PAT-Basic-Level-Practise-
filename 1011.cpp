#include<cstdio>
long long  a,b,c;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%lld%lld%lld",&a,&b,&c);
        printf("Case #%d: ",i+1);
        if(a+b>c) puts("true");
        else puts("false");
    }
    return 0;
}
