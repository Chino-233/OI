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
    ll n;
    cin>>n;
    ll index[n+10]={0};
    ll front[n+10]={0};
    for(int i=2;i<=n;i++){
        ll k,p;
        cin>>k>>p;
        if(p==0){
            index[i]=k;
            if(front[k]!=0){
                index[front[k]]=i;
                front[i]=front[k];
            }
            front[k]=i;
            
        }
        else{
            front[i]=k;
            if(index[k]!=0){
                front[index[k]]=i;
                index[i]=index[k];
            }
            index[k]=i;
            
        }
    }
    ll m;
    cin>>m;
    for(int i=1;i<=m;i++){
        ll x;
        cin>>x;
        if(index[x]==0&&front[x]==0){//index[x]==0有可能是尾，front[x]==0有可能是头，必须同时成立才是空的
            continue;
        }
        ll fro=front[x];
        ll inx=index[x];
        index[x]=0;
        front[x]=0;
        index[fro]=inx;
        front[inx]=fro;
    }
    ll pos=1;
    for(int i=1;i<=n;i++){
        if(front[i]!=0){//直接找一个前面有东西的。
            pos=i;
            break;
        }
    }
    while (front[pos]!=0)
    {
        pos=front[pos];
    }
    while(index[pos]!=0){
        cout<<pos<<" ";
        pos=index[pos];
    }
    cout<<pos;
    return 0;
}