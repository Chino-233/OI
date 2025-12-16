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
    ll F[n+10];
    ll G[n+10];
    F[1]=1;
    F[2]=2;
    G[1]=1;
    G[2]=2;
    for(int i=3;i<n+5;i++){
        G[i]=G[i-1]+F[i-1];
        G[i]%=10000;
        F[i]=F[i-1]+F[i-2]+2*G[i-2];
        F[i]%=10000;
    }
    cout<<F[n]<<endl;
    return 0;
}