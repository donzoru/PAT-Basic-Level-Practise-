#include<bits/stdc++.h>
using namespace std;
const int today = 20140906;
int main()
{
    int n,s;
    string a,b,c;
    int x,y,z,minn,maxx;
    cin>>n;
    s=0;
    minn=18140906;
    maxx=99999999;
    getchar();
    for(int i=0;i<n;++i) {
        cin>>c;
        scanf("%d/%d/%d",&x,&y,&z);
        x=x*10000+y*100+z;
        if(x>today || x+2000000<today) continue;
        ++s;
        if(x>minn){
            minn=x;
            b=c;
        }if(x<maxx){
            maxx=x;
            a=c;
        }
    }
    cout<<s;
    if(s!=0) cout<<' '<<a<<' '<<b;
    return 0;
}
