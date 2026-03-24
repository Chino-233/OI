#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll rmax[N][18];
ll rmin[N][18];
ll log_2[N+10]={0};
/*
ll RMQ(ll l ,ll r){
    ll length=l-r+1;
    ll ans=-0x3f3f3f3f;
    for(int i=0,j=1;(1<<i)<=length;i++){
        if((i>>1)&1){
            ans=max(ans,rmax[j][i]);
            j+=(1<<i);
        }
    }
    return ans;
}
*/
ll getmax(ll l,ll r){
    ll k=log_2[r-l+1];
    return max(rmax[l][k],rmax[r-(1<<k)+1][k]);
}
ll getmin(ll l,ll r){
    ll k=log_2[r-l+1];
    return min(rmin[l][k],rmin[r-(1<<k)+1][k]);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n,q;
    cin>>n>>q;
    ll h[n+10]={0};
    for(int i=1;i<=n;i++){
        cin>>h[i];
    }
    
    memset(rmax,0,sizeof(rmax));
    for(int i=1;i<=n;i++){
        rmax[i][0]=h[i];
        rmin[i][0]=h[i];
    }
    for(int j=1;(1<<j)<=n;j++){
        for(int i=1;i<=n-(1<<j)+1;i++){
            rmax[i][j]=max(rmax[i][j-1],rmax[i+(1<<j-1)][j-1]);
        }
    }
    for(int j=1;(1<<j)<=n;j++){
        for(int i=1;i<=n-(1<<j)+1;i++){
            rmin[i][j]=min(rmin[i][j-1],rmin[i+(1<<j-1)][j-1]);
        }
    }
    for(int i=2;i<=n;i++){
        log_2[i]=log_2[i>>1]+1;
    }
    while (q--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<getmax(l,r)-getmin(l,r)<<endl;
    }
    
    return 0;
}