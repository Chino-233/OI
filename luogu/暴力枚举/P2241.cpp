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
    ll minnum=min(n,m);
    ll sum=0;
    sum+=m*(m+1)/2;
    sum*=n*(n+1)/2;
    ll sqsum=0;
    for(int i=1;i<=minnum;i++){
        sqsum+=(n-i+1)*(m-i+1);
    }
    cout<<sqsum<<" "<<sum-sqsum;
    return 0;
}