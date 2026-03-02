#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 20;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll t,k;
    cin>>t>>k;
    ll c[N][N];
    ll ans[N][N];
    ll nowans=0;
    memset(c,0,sizeof(c));
    memset(ans,0,sizeof(ans));
    for(int i=0;i<=N-10;i++){
        c[i][0]=1;
        c[i][i]=1;
    }
    for(ll i=1;i<=N-10;i++){
        for(ll j=1;j<=i;j++){
            c[i][j]=c[i-1][j]+c[i-1][j-1];
            c[i][j]%=k;
            if(j<i){
                ans[i][j]+=ans[i-1][j]-ans[i-1][j-1];
            }
            ans[i][j]+=ans[i][j-1];
            if(c[i][j]==0){
                ans[i][j]++;
            }
        }
    }
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        if(m>n){
            m=n;
        }
        cout<<ans[n][m]<<endl;
    }
    
    return 0;
}