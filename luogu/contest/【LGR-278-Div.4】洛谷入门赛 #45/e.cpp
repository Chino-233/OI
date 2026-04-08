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
    ll n,m,x,y;
    cin>>n>>m>>x>>y;
    ll arr[n+10]={0};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            ll temp;
            cin>>temp;
            arr[i]+=temp;
        }
    }
    ll sum=0;
    for(int i=n;i>=x;i--){
        sum+=arr[i];
    }
    cout<<sum-arr[x]+1<<" "<<sum<<endl;
    return 0;
}