#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int sum=0;
    for(int i=0;s[i];++i)
        if(isalpha(s[i])) sum+=toupper(s[i])-'A'+1;
    int a=0,b=0;
    while(sum){
        if(sum&1) b++;
        else a++;
        sum>>=1;
    }
    cout<<a<<' '<<b<<endl;
    return 0;
}
