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
    while (x>0&&y>0)
    {
        if(x<y) swap(x,y);
        ans+=4*(x-x%y);
        x%=y;
    }
    cout<<ans;
    return 0;
}