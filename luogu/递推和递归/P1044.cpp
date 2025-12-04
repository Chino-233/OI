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
    ll n;
    cin>>n;
    ll f[n+10]={0};
    f[0]=1;f[1]=1;
    for(int i=2;i<=n;i++){
        for(int j=0;j<i;j++){
            f[i]+=f[j]*f[i-j-1];
        }
    }
    cout<<f[n];
    return 0;
}