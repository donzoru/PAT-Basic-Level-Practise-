#include<cstdio>
#include<algorithm>
using namespace std;
struct aa{
    char a[12],b[12];
    int s;
}x,y,z;
int main()
{
    int n,maxx,minn;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;++i){
            scanf("%s %s %d",z.a,z.b,&z.s);
            if(i==0) x=y=z,maxx=minn=z.s;
            if(maxx<z.s) x=z,maxx=z.s;
            if(minn>z.s) y=z,minn=z.s;
        }
        printf("%s %s\n%s %s\n",x.a,x.b,y.a,y.b);
    }
    return 0;
}
