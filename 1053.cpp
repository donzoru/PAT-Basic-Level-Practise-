#include<bits/stdc++.h>
using namespace std;
double a[3];
int main()
{
    double e;
    int n,d,t;
    cin>>n>>e>>d;
    a[0]=n;
    a[1]=a[2]=0;
    while(n--){
        cin>>t;
        int s=0;
        double k;
        for(int i=0;i<t;++i){
            cin>>k;
            if(k<e) ++s;
        }
        if(s>t/2){
            if(t>d) ++a[2];
            else ++a[1];
        }
    }
    printf("%.1lf%% %.1lf%%\n",a[1]/a[0]*100.0,a[2]/a[0]*100.0);
    return 0;
}
