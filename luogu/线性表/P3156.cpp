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
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n+10);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=0;i<m;i++){
        ll temp;
        cin>>temp;
        cout<<v[temp]<<endl;
    }
    return 0;
}