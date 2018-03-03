#include<bits/stdc++.h>
using namespace std;
#define M 1010
int n,m,s[M],tim[M][5];
double f[M];
bool ok[M][5];
bool tem[5];
char c;
int main(){
    scanf("%d%d",&n,&m);
    for(int i=0,b;i<m;++i){
        scanf("%lf%d%d",f+i,&b,&s[i]); b=s[i];
        while(b--) {
            scanf(" %c",&c);
            ok[i][c-'a']=true;
        }
    }
    int maxx=0;
    for(int i=0,a;i<n;++i){
        double ans=0;
        for(int j=0,t=0;j<m;t=0,++j){
            getchar();  getchar();
            scanf("%d",&a);
            memset(tem,false,sizeof(tem));
            while(a--){
                scanf(" %c",&c);
                tem[c-'a']=true;
                if(ok[j][c-'a']==false) t=-100000;
                else ++t;
            }
            getchar();
            for(int k=0;k<5;++k)
                if(tem[k]!=ok[j][k])
                    maxx=max(maxx,++tim[j][k]);
            if(t<=0) continue;
            if(t==s[j]) ans+=f[j];
            else ans+=f[j]/2.0;
        }
        printf("%.1f\n",ans);
    }
    if(maxx==0){
        puts("Too simple");
    }else {
        for(int i=0;i<m;++i)
            for(int j=0;j<5;++j)
                if(tim[i][j]==maxx)
            printf("%d %d-%c\n",maxx,i+1,j+'a');
    }
    return 0;
}
/**
3 4
3 4 2 a c
2 5 1 b
5 3 2 b c
1 5 4 a b d e
(2 a c) (3 b d e) (2 a c) (3 a b e)
(2 a c) (1 b) (2 a b) (4 a b d e)
(2 b d) (1 e) (1 c) (4 a b c d)
*/
