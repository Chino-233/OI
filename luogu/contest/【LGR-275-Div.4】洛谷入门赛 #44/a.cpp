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
    ll k,m;
    cin>>k>>m;
    ll s=m/k;
    s--;
    s/=2;
    cout<<s<<endl;

    return 0;
}