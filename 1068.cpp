#include<bits/stdc++.h>
using namespace std;
int m,n,tol;
map<int,int> M;
vector<vector<int> > a;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
bool ok(int x,int y)
{
    for(int i=0;i<8;++i){
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(xx>=0 && xx<m && yy>=0 && yy<n && abs(a[x][y]-a[xx][yy])<=tol)
            return false;
    }
    return true;
}
int main()
{

    cin>>n>>m>>tol;
    a.resize(m,vector<int>(n));
    M.clear();
    for(int i=0;i<m;++i)
        for(int j=0;j<n;++j)
            cin>>a[i][j],++M[a[i][j]];
    int x=0,y=0,cnt=0;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(M[a[i][j]]==1 && ok(i,j)) {
                ++cnt,x=i,y=j;
            }
        }
    }
    if(cnt==1)
        printf("(%d, %d): %d\n",y+1,x+1,a[x][y]);
    else if(cnt==0)
        cout<<"Not Exist"<<endl;
    else puts("Not Unique");
    return 0;
}
