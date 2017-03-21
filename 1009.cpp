#include<string>
#include<iostream>
using namespace std;
string a[100];
int main()
{
    int i;
    for(i=0;cin>>a[i];++i);
    for(int j=i-1;j>=0;cout<<a[j--]<<(j==0?'\n':' '));
    return 0;
}
