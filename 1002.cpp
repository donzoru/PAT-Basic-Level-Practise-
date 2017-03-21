#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
char s[102];
string ans;
void print(int n)
{
    if(n==0) return;
    print(n/10);
    switch(n%10){
    case 0: ans=ans+" ling";break;
    case 1: ans=ans+" yi";break;
    case 2: ans=ans+" er";break;
    case 3: ans=ans+" san";break;
    case 4: ans=ans+" si";break;
    case 5: ans=ans+" wu";break;
    case 6: ans=ans+" liu";break;
    case 7: ans=ans+" qi";break;
    case 8: ans=ans+" ba";break;
    case 9: ans=ans+" jiu";break;
    }
}
int main()
{
    int sum;
    while(gets(s)){
        int sum=0;
        ans.clear();
        for(int i=0;s[i];++i)
            sum+=s[i]-'0';
        print(sum);
        ans.erase(ans.begin());
        cout<<ans<<endl;
    }
    return 0;
}
