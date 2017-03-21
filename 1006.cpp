#include<cstdio>
void cc(int n,int k)
{
    if(n==0) return;
    cc(n/10,k+1);
    n%=10;
    if(k==0) for(int i=0;i<n;++i) printf("%d",i+1);
    else if(k==1) for(int i=0;i<n;++i) putchar('S');
    else for(int i=0;i<n;++i) putchar('B');
}
int main()
{
    int n;
    scanf("%d",&n);
    cc(n,0);
    return 0;
}
