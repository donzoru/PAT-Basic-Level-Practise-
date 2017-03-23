#include<bits/stdc++.h>
using namespace std;
bool ok(string s)
{
    int i;
    if(s[0]=='-' ||s[i]=='+') i=1;
    else i=0;
    for(;i<s.length();++i)
        if(isdigit(s[i])) continue;
        else if(s[i]=='.') break;
        else return false;
    if(s[i]=='.' && s.length()-i>3) return false;

    for(++i;i<s.length();++i)
        if(isdigit(s[i])) continue;
        else return false;
    double k=stod(s);
    if(k<-1000 || k>1000) return false;
    return true;
}
int main()
{
    int n;
    double sum,num;
    sum=num=0.0;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        if(ok(s)){
            sum+=stod(s);
            ++num;
        }
        else cout<<"ERROR: "<<s<<" is not a legal number"<<endl;
    }
    n=(int)num;
    if(n==1) printf("The average of 1 number is ");
    else printf("The average of %d numbers is ",n);
    sum/=num;
    if(n>0) printf("%.2lf\n",sum);
    else puts("Undefined");
    return 0;
}
