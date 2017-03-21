#include<bits/stdc++.h>
using namespace std;
bool has[256];
string a;
int main()
{
    memset(has,0,sizeof(has));
    getline(cin,a);
    int flag = 0;
    flag = a.find('+');
    if(flag>0) a[flag]='#';
    for(int i=0;a[i];++i){
        if(isalpha(a[i]))
            has[a[i]]=has[tolower(a[i])]=true;
        else has[a[i]]=true;
    }
    if(flag>0) for(char i='A';i<='Z';++i) has[i]=true;
    getline(cin,a);
    flag=0;
    for(int i=0;a[i];++i){
        if(has[a[i]]) continue;
        cout<<a[i];
        flag=1;
    }
    if(flag==0) cout<<endl;
    return 0;
}
