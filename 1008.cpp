#include<cstdio>
int a[102];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    k%=n;
    for(int i=0;i<n;++i)
        scanf("%d",a+i);
    for(int i=n-k;i<n;++i)
        printf("%d%c",a[i],(k==0 && i==n-1)?'\n':' ');
    for(int i=0;i<n-k;++i)
        printf("%d%c",a[i],i==n-k-1?'\n':' ');
    return 0;
}
