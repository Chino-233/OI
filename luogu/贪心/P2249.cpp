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
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        ll temp;
        cin>>temp;
        if(mp.find(temp) == mp.end()){
            mp[temp]=i;
        }
    }
    for(int i=0;i<m;i++){
        ll temp;
        cin>>temp;
        if(mp.find(temp) == mp.end()){
            cout<<-1;
        }
        else{
            cout<<mp[temp];
        }
        cout<<" ";
    }
    return 0;
}