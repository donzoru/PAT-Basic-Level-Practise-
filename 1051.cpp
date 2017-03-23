#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double x=a*c;
    double y=b+d;
    a=x*cos(y);
    b=x*sin(y);
    if(a+0.005>=0 && a<0) printf("0.00");
    else printf("%.2f",a);
    if(b>=0) printf("+%.2fi",b);
    else if(b+0.01>=0 && b<0) printf("+0.00i");
    else printf("%.2fi",b);
    return 0;
}
