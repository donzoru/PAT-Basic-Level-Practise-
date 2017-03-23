#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
int lcm(int a,int b)
{
    return a/gcd(a,b)*b;
}
vector<int> ans;
int main()
{
    int a,b,c,d,k;
    scanf("%d/%d %d/%d %d",&a,&b,&c,&d,&k);
    if(a*d>b*c){
        swap(a,c);
        swap(b,d);
    }
    int t=lcm(lcm(b,d),k);
    a*=t/b;
    c*=t/d;
    ans.clear();
    t/=k;
    for(int i=a+1;i<c;++i){
        if(i%t==0 && gcd(i/t,k)==1)
            ans.push_back(i/t);
    }
    for(int i=0;i<ans.size();++i)
        printf("%d/%d%c",ans[i],k,(i==ans.size()-1?'\n':' '));
    return 0;
}
