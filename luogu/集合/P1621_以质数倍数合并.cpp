#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 3000;
#define ll long long
ll f[N];
ll a,b,p;
ll ans=0;
ll find(ll n){
    if(f[n-a]!=n){
        f[n-a]=find(f[n-a]);
    }
    return f[n-a];
}
ll add(ll n,ll m){
    ll a1=find(n);
    ll a2=find(m);
    if(a1!=a2){
        f[a2-a]=a1;
        ans-=1;
    }
    return 1;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    cin>>a>>b>>p;
    ans=b-a+1;
    ll prime[1010]={0};
    ll cut=0;
    ll vis[1010]={0};
    for(int i=2;i<=1000;i++){
        if(!vis[i]){
            prime[++cut]=i;
        }
        for(int j=1;i*prime[j]<=1000&&j<=cut;j++){
            vis[i*prime[j]]=1;
            if(i%prime[j]==0){
                break;
            }
        }
    }
    for(int i=a;i<=b;i++){
        f[i-a]=i;
    }
    for(int i=1;i<=cut;i++){
        if(prime[i]<p) continue;
        if(prime[i]>b) break; 
        ll pri=prime[i];
        for(int j=((a-1)/pri+1)*pri+pri;j<=b;j+=pri){
            add(j,j-pri);
        }
    }
    cout<<ans;
    return 0;
}