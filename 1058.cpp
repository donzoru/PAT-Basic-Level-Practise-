#include<bits/stdc++.h>
using namespace std;
const int nu = 102;
int N,M;
set<char> ans[nu];
int gra[nu],cnt[nu],wro[nu];
int sum[nu*10];
void init()
{
    for(int i=0;i<M;++i){
        ans[i].clear();
        wro[i]=0;
    }
    memset(sum,0,sizeof(sum));
}
string buf;
int main()
{
    cin>>N>>M;
    init();
    int a,b;
    char c;
    for(int i=0;i<M;++i){
        cin>>gra[i]>>a>>cnt[i];
        b=cnt[i];
        while(b--){
            getchar();
            cin>>c;
            //cout<<c<<endl;
            ans[i].insert(c);
        }
    }
    getchar();
    for(int k=0;k<N;++k){
        getline(cin,buf);
        a=0;
        b=0;
        for(int i=0;i<buf.size();++i){
            if(buf[i]==')') {
                if(b==1) ++wro[a];
                else sum[k]+=gra[a];
                ++a; b=0;
            }else if(isalpha(buf[i])){
                c=tolower(buf[i]);
                if(b==1 || ans[a].find(c)!=ans[a].end()) continue;
                else b=1;
            }else if(isdigit(buf[i])){
                int t=buf[i]-'0';
                if(t!=cnt[a]) b=1;
            }
        }
    }
    for(int i=0;i<N;++i)
        cout<<sum[i]<<endl;
    a=*max_element(wro,wro+M);
    if(a!=0){
        vector<int> aa;
        cout<<a;
        for(int i=0;i<M;++i)
            if(wro[i]==a) aa.push_back(i+1);
        for(int i=0;i<aa.size();++i)
            cout<<' '<<aa[i];
    }else puts("Too simple");
    return 0;
}
