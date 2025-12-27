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
    ll x[n+10]={0};
    ll sum=0;
    ll money=0;
    for(int i=0;i<n;i++){
        ll x,p;
        cin>>x>>p;
        if(x>=500&&p<500){
            sum++;
            money+=p;
        }
    }
    cout<<sum<<" "<<money;
    return 0;
}