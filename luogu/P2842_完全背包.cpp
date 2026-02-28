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
    ll n,w;
    cin>>n>>w;
    ll a[n+10]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans=0;
    ll dp[w+10010];
    
    memset(dp,0x3f3f3f3f,sizeof(dp));
    dp[0]=0;
    for(int i=0;i<=w;i++){
        for(int j=0;j<n;j++){
            dp[i+a[j]]=min(dp[i+a[j]],dp[i]+1);
        }
    }
    cout<<dp[w];
    return 0;
}