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
        ll used[n+10]={0};
        ll ans=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            ll flag=0;
            if(i>=2){
                if(a[i]==a[i-1]||a[i]+a[i-1]==7){
                    flag=1;
                }
            }
            if(flag){
                if(used[i-1]==1){
                    continue;
                }
                used[i]=1;
                ans++;
            }
        }
        //cout<<"used";
        //for(int i=1;i<=n;i++) cout<<i<<":"<<used[i]<<endl;
        cout<<ans<<endl;
    }
    return 0;
}