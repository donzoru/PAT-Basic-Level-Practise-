#include<bits/stdc++.h>
using namespace std;
int a[4],b[4];
void sub(int a[],int b[])
{
    a[0]-=b[0];
    a[2]=a[0]/29;
    a[1]=a[2]/17;
    a[2]%=17;
    a[3]=a[0]-a[1]*17*29-a[2]*29;
    printf("%d.%d.%d\n",a[1],a[2],a[3]);
}
int main()
{
    scanf("%d.%d.%d",a+1,a+2,a+3); a[0]=a[1]*17*29+a[2]*29+a[3];
    scanf("%d.%d.%d",b+1,b+2,b+3); b[0]=b[1]*17*29+b[2]*29+b[3];
    if(a[0]>b[0]) {
        putchar('-');
        sub(a,b);
    }else sub(b,a);
    return 0;
}
