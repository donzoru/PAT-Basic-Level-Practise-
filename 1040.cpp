#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll m=1e9+7;
string s;
ll n[3];
int main()
{

    cin>>s;
    memset(n,0,sizeof(n));
    for(int i=0;s[i];++i) if(s[i]=='T') ++n[2];
    for(int i=0;s[i];++i){
        if(s[i]=='P') ++n[1];
        else if(s[i]=='T') --n[2];
        else n[0] = (n[0]+n[1]*n[2]%m)%m;
    }
    cout<<n[0]<<endl;
    return 0;
}
