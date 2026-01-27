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
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n+10]={0};
        ll b[n+10]={0};
        ll maxuse=-1;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            maxuse=max(maxuse,a[i]);
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        ll sum[n+10]={0};
        sum[1]=b[1];
        for(int i=2;i<=n;i++){
            sum[i]=sum[i-1]+b[i];
        }
        sort(a+1,a+n+1);
        ll l=0,r=n;
        ll ans=0;
        for(int i=1;i<=n;i++){
            if(sum[i]>n){
                break;
            }
            ans=max(ans,i*a[n-sum[i]+1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}