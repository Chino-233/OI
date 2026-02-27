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
        ll a[12]={0};
        ll maxn=-1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxn=max(maxn,a[i]);
        }
        ll ans=0;
        for(int i=0;i<n;i++){
            if(maxn==a[i]){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}