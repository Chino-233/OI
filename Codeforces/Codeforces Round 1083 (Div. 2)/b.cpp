#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
int isPrime(ll n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
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
        set<ll>s;
        ll ans=1;
        for(int i=2;i<=n/i;i++){
            if(n%i==0){
                ans*=i;
                while (n%i==0)
                {
                   n/=i;
                }
            }
        }
        if(n>1){
            ans*=n;
        }
        cout<<ans<<endl;
    }
    return 0;
}