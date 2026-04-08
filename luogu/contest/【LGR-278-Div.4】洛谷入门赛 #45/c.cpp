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
    ll n,k;
    cin>>n>>k;
    ll maxnum=-1;
    ll arr[n+10]={0};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(i<=k){
            maxnum=max(maxnum,arr[i]);
        }
        else{
            if(arr[i]>maxnum){
                cout<<arr[i];
                break;
            }
        }
        if(i==n){
            cout<<arr[i];
        }
    }

    return 0;
}