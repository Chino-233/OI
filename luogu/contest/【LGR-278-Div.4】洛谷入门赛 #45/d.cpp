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
    ll arr[2*n+10]={0};
    vector<vector<ll>>v(n+10);
    for(int i=1;i<=2*n;i++){
        cin>>arr[i];
        v[arr[i]].push_back(i);
    }
    for(int i=1;i<=2*n;i++){
        for(int j=0;j<=1;j++){
            if(v[arr[i]][j]!=i){
                cout<<v[arr[i]][j]<<" ";
                break;
            }
        }
    }

    return 0;
}