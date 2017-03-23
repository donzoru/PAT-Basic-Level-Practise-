#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double a,b,ans;
    ans=0.0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        ans=max(ans,sqrt(a*a+b*b));
    }
    printf("%.2lf\n",ans);
    return 0;
}
