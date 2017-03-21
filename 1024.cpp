#include<bits/stdc++.h>
using namespace std;
string s;
string::iterator it;
void tra()
{
    int e=s.find('E');
    int k=0,i;
    for(i=e+2;i<s.size();++i)
        k=k*10+s[i]-'0';
    if(s[0]=='-') cout<<'-';
    if(s[e+1]=='-'){
        if(k>0){
            cout<<"0.";
            for(i=1;i<k;++i) cout<<'0';
            for(i=1;i<e;++i)
                if(isdigit(s[i])) cout<<s[i];
        }else{
            for(int i=1;i<e;++i) cout<<s[i];
        }
    }
    else {
        if(k>e-3){
            for(i=1;i<e;++i)
                if(isdigit(s[i])) cout<<s[i];
            for(i=0;i<k-(e-3);++i) cout<<'0';
        }else{
            for(i=1;i<e;++i){
                if(i-3==k) cout<<'.';
                if(isdigit(s[i])) cout<<s[i];
            }
        }
    }
}
int main()
{
    getline(cin,s);
    tra();
    return 0;
}
/*
+1.23400E-03
-1.2E+10
*/
