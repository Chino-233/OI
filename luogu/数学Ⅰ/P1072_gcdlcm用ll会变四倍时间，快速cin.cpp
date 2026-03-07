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
    std::ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--){
    int a0,a1,b0,b1;
    cin>>a0>>a1>>b0>>b1;
    int ans=0;
    for(int i=1;i<=b1/i;i++){
        if(b1%i==0){
            if(gcd(i,a0)==a1&&lcm(i,b0)==b1){
                ans++;
            }
            if(i*i!=b1&&gcd(b1/i,a0)==a1&&lcm(b1/i,b0)==b1){
                ans++;
            }
        }
    } 
    cout<<ans<<"\n";
    }
    return 0;
}