#include<bits/stdc++.h>
using namespace std;
string a[]={"xxx","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
string b[]={"xxx","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
void tran(int n)
{
    if(n<=12) cout<<a[n]<<endl;
    else if(n%13==0) cout<<b[n/13]<<endl;
    else cout<<b[n/13]<<' '<<a[n%13]<<endl;
}
void sol(string s)
{
    if(s.length()!=3){
        int n=s.find(" ");
        string x=s.substr(0,n),y=s.substr(n+1,s.length()-n-1);
        int m;
        n=m=0;
        for(int i=1;i<13;++i){
            if(b[i]==x)
                n=i;
            if(a[i]==y)
                m=i;
        }
        cout<<n*13+m<<endl;
    }
    else{
         for (int j = 1; j <= 12; j++) {
            if (s == a[j]) {
                cout << j << endl;
            } else if (s == b[j]) {
                cout << 13 * j << endl;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    getchar();
    string s;
    while(t--){
        getline(cin,s);
        if(isdigit(s[0])){
            if(s[0]=='0') cout<<"tret"<<endl;
            else tran(stoi(s));
        }else {
            sol(s);
        }
    }
    return 0;
}
