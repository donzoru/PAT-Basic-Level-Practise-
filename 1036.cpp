#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char c;
    cin>>n>>c;
    int e=(n+1)/2;
    for(int i=0;i<e;++i){
        putchar(c);
        for(int j=1;j<n-1;++j)
            if(i==0 || i==e-1) putchar(c);
            else putchar(' ');
        putchar(c);
        puts("");
    }
    return 0;
}
