#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
int judge(ll a,ll b,ll c){
    if(a+b==c||a+c==b||b+c==a){
        return 1;
    }
    if(a*b==c||a*c==b||b*c==a){
        return 1;
    }
    return 0;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n,x,y;
    cin>>n>>x>>y;
    ll a[n+10]={0};
    ll ans=0;
    ll maxle=-1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(judge(x,y,a[i])){
            ans++;
            maxle=max(maxle,a[i]);
        }
    }
    cout<<ans<<" "<<maxle<<endl;
    return 0;
}