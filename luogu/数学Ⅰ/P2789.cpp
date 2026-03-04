#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
map<ll,ll> mp;
ll ans;
void getnum(ll n,ll num){
    if(n==0){
        if(mp[num]==0){
            mp[num]=1;
            ans++;
        }
    }
    for(int i=n;i>=1;i--){
        getnum(n-i,i*(n-i)+num);
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n;
    cin>>n;
    getnum(n,0); 
    cout<<ans;
    return 0;
}