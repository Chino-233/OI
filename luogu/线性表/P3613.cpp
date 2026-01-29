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
    ll n,q;
    cin>>n>>q;
    vector<vector<ll>>v(n+10);
    while (q--)
    {
        ll ops;
        cin>>ops;
        if(ops==1){
            ll i,j,k;
            cin>>i>>j>>k;
            if(v[i].size()<j+1){
                v[i].resize(j+1);
            }
            v[i][j]=k;
        }
        else{
            ll i,j;
            cin>>i>>j;
            cout<<v[i][j]<<endl;
        }
    }
    return 0;
}