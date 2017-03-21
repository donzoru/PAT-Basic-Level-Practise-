#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,b[4];
    cin>>a;
    for(;;){
        b[0]=a/1000;
        b[1]=a%1000/100;
        b[2]=a%100/10;
        b[3]=a%10;
        sort(b,b+4);
        a=b[3]*1000+b[2]*100+b[1]*10+b[0];
        c=b[0]*1000+b[1]*100+b[2]*10+b[3];
        printf("%04d - %04d = %04d\n",a,c,a-c);
        if(a-c==6174 || b[0]==b[3]) break;
        a=a-c;
    }
    return 0;
}
