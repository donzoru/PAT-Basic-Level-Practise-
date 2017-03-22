#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double a,ans;
    cin>>n;
    ans=0;
    for(int i=0;i<n;++i){
        scanf("%lf",&a);
        ans+=a*(i+1)*(n-i);
    }
    printf("%.2lf\n",ans);
    return 0;
}
