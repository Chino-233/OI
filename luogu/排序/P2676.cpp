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
    ll n,b;
    cin>>n>>b;
    ll arr[n+10]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll sum=0;
    ll num=0;
    for(int i=n-1;i>=0;i--){
        num++;
        sum+=arr[i];
        if(sum>b){
            break;
        }
    }
    cout<<num;
    return 0;
}