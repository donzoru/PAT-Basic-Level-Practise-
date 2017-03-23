#include<bits/stdc++.h>
using namespace std;
vector<int> peo;
set<int> has;
bool is(int n)
{
    if(n==2) return 1;
    if(n<2 || !(n&1)) return 0;
    int t=(int)sqrt(n*1.0);
    for(int i=3;i<=t;++i)
        if(n%i==0) return 0;
    return 1;
}
int main()
{
    int n,a;
    cin>>n;
    peo.clear();
    has.clear();
    while(n--){
        cin>>a;
        peo.push_back(a);
    }
    cin>>n;
    while(n--){
        cin>>a;
        printf("%04d: ",a);
        if(find(peo.begin(),peo.end(),a)==peo.end())
            cout<<"Are you kidding?"<<endl;
        else if(has.find(a)!=has.end())
            cout<<"Checked"<<endl;
        else{
            int i;
            has.insert(a);
            for(i=0;peo[i]!=a;++i);
            if(i==0) cout<<"Mystery Award"<<endl;
            else if(is(i+1)) cout<<"Minion"<<endl;
            else cout<<"Chocolate"<<endl;
        }
    }
    return 0;
}
