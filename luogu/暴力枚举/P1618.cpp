#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll a,b,c;
    cin>>a>>b>>c;
    ll num=1;
    ll no=0;
    while (num<1000)
    {
        ll temp[3]={0};
        temp[0]=num*a;
        temp[1]=num*b;
        temp[2]=num*c;
        if(temp[0]<100){
            num++;
            continue;
        }
        if(temp[1]>999||temp[2]>999){
            break;
        }
        ll posnum[10]={0};
        int flag=0;
        for(int k=0;k<3;k++){
            for(int i=0;i<3;i++){
               ll pos=temp[k]%10;
               temp[k]/=10;
               posnum[pos]++;
            }
        }
        if(posnum[0]>0){
            flag=1;
        }
        for(int i=1;i<10;i++){
            if(posnum[i]>=2){
                flag=1;
            }
        }
        if(flag==0){
            no=1;
            cout<<num*a<<" "<<num*b<<" "<<num*c<<endl;
        }
        num++;
    }
    if(!no){
        cout<<"No!!!";
    }
    return 0;
}