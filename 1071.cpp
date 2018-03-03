#include<bits/stdc++.h>
using namespace std;
#define M 110
int tot,k;
int n1[M],b[M],t[M],n2[M];
int main(){
    while(scanf("%d%d",&tot,&k)!=EOF){
        int ans=-1;
        for(int i=0;i<k;++i){
            scanf("%d%d%d%d",&n1[i],&b[i],&t[i],&n2[i]);
        }
        for(int i=0;i<k;++i){
            if(tot==0){
                puts("Game Over.");
                break;
            }
            if(tot < t[i]){
                printf("Not enough tokens.  Total = %d.\n",tot);
            }else if(b[i]==1){
                if(n1[i] < n2[i]) {
                    tot+=t[i];
                    printf("Win %d!  Total = %d.\n",t[i],tot);
                }else {
                    tot-=t[i];
                    printf("Lose %d.  Total = %d.\n",t[i],tot);
                }
            }else if(b[i]==0){
                if(n1[i] > n2[i]){
                    tot+=t[i];
                    printf("Win %d!  Total = %d.\n",t[i],tot);
                }else {
                    tot-=t[i];
                    printf("Lose %d.  Total = %d.\n",t[i],tot);
                }
            }
        }
    }
    return 0;
}
