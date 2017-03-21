#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int a,b,c,e;
double d,dn;
int main()
{
    bool f[5];
    for(int i=0;i<5;++i)
        f[i]=0;
    a=b=c=e=0;
    d=dn=0;
    int n,k;
    cin>>n;
    k=1;
    for(int i=0,p;i<n;++i){
        cin>>p;
        switch(p%5){
            case 0:a+=(p&1?0:p);f[0]=(p&1?0:1);break;
            case 1:b+=p*k;k=-k;f[1]=1;break;
            case 2:++c;f[2]=1;break;
            case 3:d+=p;dn+=1;f[3]=1;break;
            case 4:e=max(e,p);f[4]=1;break;
        }
    }
    if(f[0]) printf("%d",a);
    else putchar('N');
    putchar(' ');
    if(f[1]) printf("%d",b);
    else putchar('N');
    putchar(' ');
    if(f[2]) printf("%d",c);
    else putchar('N');
    putchar(' ');
    if(f[3]) printf("%.1lf",d/dn);
    else putchar('N');
    putchar(' ');
    if(f[4]) printf("%d",e);
    else putchar('N');
    return 0;
}
