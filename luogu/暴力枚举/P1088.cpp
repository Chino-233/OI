#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif;
    ll n,m;
    cin>>n>>m;
    ll arr[n+10]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while (m--)
    {
        next_permutation(arr,arr+n);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    return 0;
}