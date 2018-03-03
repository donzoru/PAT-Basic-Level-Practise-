#include<bits/stdc++.h>
using namespace std;
char buf[10010];
int n,d[5];
vector<string> a,b,c;
string s = "Are you kidding me? @\/@";
string ans;
int main(){
    gets(buf);
    puts(buf);
    for(int i=0,j;buf[i];i+=j){
        if(buf[i]!='[') {
            j=1; continue;
        }
        string t="";
        for(j=1;buf[i+j]!=']';++j)
            t=t+buf[i+j];
        a.push_back(t);
        cout<<t<<endl;
    }
}
/**
[¨r][¨q][o][~\][/~]  [<][>]
*/
