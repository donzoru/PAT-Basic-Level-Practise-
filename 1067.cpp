#include<bits/stdc++.h>
using namespace std;
string a,b;
int n;
int main()
{
    cin>>a>>n;
    getchar();
    while(n--){
        getline(cin,b);
        if(b=="#") break;
        if(a==b){
            cout<<"Welcome in"<<endl;
            break;
        }else {
            cout<<"Wrong password: "<<b<<endl;
            if(n==0) {
                cout<<"Account locked"<<endl;
                break;
            }
        }
    }while(b!="#") getline(cin,b);
    return 0;
}
