#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    a=(b-a)/100;
    b=(b-a)%100;
    printf("%02d:%02d:%02d\n",a/3600,a%3600/60,a%60+(b>44?1:0));
    return 0;
}
