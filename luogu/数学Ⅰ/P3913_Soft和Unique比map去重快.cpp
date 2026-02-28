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
    ll n,k;
    cin>>n>>k;
    vector<ll> r(k+10);
    vector<ll> c(k+10);
    for(int i=0;i<k;i++){
        cin>>r[i];
        cin>>c[i];
    }
    sort(r.begin(),r.end());
    sort(c.begin(),c.end());
    ll rsize=distance(r.begin(),unique(r.begin(),r.end()))-1;
    ll csize=distance(c.begin(),unique(c.begin(),c.end()))-1;
    cout<<rsize*n+csize*n-rsize*csize;
    return 0;
}