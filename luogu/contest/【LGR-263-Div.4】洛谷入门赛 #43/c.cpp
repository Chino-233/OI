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
    for(int i=1;i<=n;i++){
        ll r,c;
        cin>>r>>c;
        m-=r*c;
        if(m<=0){
            cout<<2*i;
            break;
        }
    }
    return 0;
}