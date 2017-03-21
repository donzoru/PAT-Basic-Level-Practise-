#include<bits/stdc++.h>
using namespace std;
string a,b;
string day[]={"MON","TUE","WED","THU","FRI","SAT","SUN"};

int main()
{
    getline(cin,a);
    getline(cin,b);
    int i;
    for(i=0;i<a.size() && i<b.size();++i)
        if(isupper(a[i]) && a[i]<='G' && a[i]==b[i])
            break;
    cout<<day[a[i]-'A'];
    for(++i;i<a.size() && i<b.size();++i)
        if(isupper(a[i]) && a[i]<='N' || isdigit(a[i]))
            if(a[i]==b[i])
                break;
    printf(" %02d",isalpha(a[i])?10+a[i]-'A':a[i]-'0');
    getline(cin,a);
    getline(cin,b);
    for(i=0;i<a.size() && i<b.size();++i)
        if(isalpha(a[i]) && a[i]==b[i])
            break;
    printf(":%02d\n",i);
    return 0;
}
