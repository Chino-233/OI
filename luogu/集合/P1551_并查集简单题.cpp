#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll f[N+10]={0};
ll find(ll n){
    if(f[n]!=n) f[n]=find(f[n]);
    return f[n];
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n,m,p;
    cin>>n>>m>>p;
    for(int i=1;i<=n;i++) f[i]=i;
    for(int i=0;i<m;i++){
        ll mi,mj;
        cin>>mi>>mj;
        ll group=find(mi);
        ll group2=find(mj);
        f[group2]=group;
    }
    for(int i=0;i<p;i++){
        ll pi,pj;
        cin>>pi>>pj;
        if(find(pi)==find(pj)){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        cout<<endl;
    }
    return 0;
}