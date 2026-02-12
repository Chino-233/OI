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
        ll ans=0;
        ll a[n+10]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        ll divnum=(ll)sqrt(n);
        for(int i=1;i<=n;i++){
            if(a[i]>divnum){
                for(int k=1;k<=divnum;k++){
                    ll j=i+a[i]*k;
                    if(j>n){
                        break;
                    }
                    if(k==a[j]){
                        ans++;
                    }
                }
            }
            for(int k=1;k<=divnum;k++){
                    ll j=i-a[i]*k;
                    if(j<1){
                        break;
                    }
                    if(k==a[j]){
                        ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}