#include<cstdio>
int a,b;
int main()
{
    bool flag=0;
    while(scanf("%d%d",&a,&b)!=EOF){
        if(b!=0){
            if(flag) putchar(' ');
            else flag=1;
            printf("%d %d",a*b,b-1);
        }
    }
    if(!flag) printf("0 0");
    return 0;
}
