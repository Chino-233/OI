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
    ll x,y;
    cin>>x>>y;
    ll ans=0;
    for(ll i=1;i<=y/i;i++){
        if(y%i==0){
            ll P=y*x/i;
            if(gcd(P,i)==x){
                ans++;
            }
            P=x*i;
            if(gcd(P,y/i)==x){
                ans++;
            }
        }
    } 
    cout<<ans;
    return 0;
}