#include<bits/stdc++.h>
using namespace std;
int a[3][3];
int main()
{
    int n;
    string x,y;
    memset(a,0,sizeof(a));
    cin>>n;
    while(n--){
        getchar();
        cin>>x>>y;
        if(x==y)
            ++a[0][1];
        else if(x=="C"){
            if(y=="J") ++a[0][0],++a[1][0];
            else ++a[0][2],++a[2][2];//b
        }else if(x=="J"){
            if(y=="B") ++a[0][0],++a[1][1];
            else ++a[0][2],++a[2][0];//c
        }else if(x=="B"){
            if(y=="C") ++a[0][0],++a[1][2];
            else ++a[0][2],++a[2][1];//j
        }
    }
    for(int i=0;i<3;++i)
        cout<<a[0][i]<<(i==2?'\n':' ');
    for(int i=0;i<3;++i)
        cout<<a[0][2-i]<<(i==2?'\n':' ');
    n=*max_element(a[1],a[1]+3);
    if(a[1][2]==n) cout<<"B";
    else if(a[1][0]==n) cout<<"C";
    else cout<<"J";
    n=*max_element(a[2],a[2]+3);
    if(a[2][2]==n) cout<<" B";
    else if(a[2][0]==n) cout<<" C";
    else cout<<" J";
    return 0;
}
