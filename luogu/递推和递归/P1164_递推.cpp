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
    int n,m;
    cin>>n>>m;
    int arr[n+10]={0};
    ll cost[m+10]={0};
    cost[0]=1;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        for(ll j=m-arr[i];j>=0;j--){
            cost[j+arr[i]]+=cost[j];
        }
    }
    cout<<cost[m];
    return 0;
}