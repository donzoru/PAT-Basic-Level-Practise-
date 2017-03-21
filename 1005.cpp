#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
bool is[102];
int a[102];
int coun(int n)
{
    while(n!=1){
        if(n&1) n=(3*n+1)/2;
        else n>>=1;
        if(n<101) is[n]=true;
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;++i)
            scanf("%d",a+i);
        memset(is,0,sizeof(is));
        for(int i=0;i<n;++i)
            coun(a[i]);
        sort(a,a+n);
        a[101]=0;
        for(int i=n-1;i>=0;--i)
            if(!is[a[i]])
                if(a[101]==0) printf("%d",a[i]),a[101]=1;
                else printf(" %d",a[i]);
        puts("");
    }
    return 0;
}
