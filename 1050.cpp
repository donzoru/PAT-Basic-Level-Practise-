#include<bits/stdc++.h>
using namespace std;
const int M = 10003;
int m,n;
int b[M];
int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;++i) cin>>b[i];
    sort(b,b+N);
    for(int i=sqrt(N*1.0);i>=1;--i)
        if(N%i==0) { m=N/i;n=i;break;}
    vector<vector<int> > a(m, vector<int>(n));
    int k=N-1,i=0,j=0;
    while(k>=0){
        while(j<n && a[i][j]==0) a[i][j++]=b[k--];
        --j; ++i;
        while(i<m && a[i][j]==0) a[i++][j]=b[k--];
        --i; --j;
        while(j>=0 && a[i][j]==0) a[i][j--]=b[k--];
        ++j; --i;
        while(i>=0 && a[i][j]==0) a[i--][j]=b[k--];
        ++i; ++j;
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j)
            printf("%d%c",a[i][j],j==n-1?'\n':' ');
    }
    return 0;
}
