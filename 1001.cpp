#include<cstdio>
int main()
{
    int n,c;
    while(scanf("%d",&n)!=EOF){
        c=0;
        while(n!=1){
            ++c;
            if(n&1) n=(3*n+1)/2;
            else n>>=1;
        }
        printf("%d\n",c);
    }
    return 0;
}
