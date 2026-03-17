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
    vector<vector<ll>>v(n+10);
    for(int i=1;i<=n;i++){
        ll len;
        cin>>len>>len;
        v[i].push_back(len);
        while (cin>>len)
        {
            if(len==0){
                break;
            }
            v[i].push_back(len);
        }
    }
    ll dp[n+10]={0};
    for(int i=1;i<=n;i++){
        ll num=v[i][0];
        if(v[i].size()==1){
            dp[i]=num;
        }
        else{
            for(int j=1;j<v[i].size();j++){
                dp[i]=max(dp[i],dp[v[i][j]]);
            }
            dp[i]+=num;
        }
    }
    ll maxnum=-1;
    for(int i=1;i<=n;i++){
        maxnum=max(maxnum,dp[i]);
    }
    cout<<maxnum;
    return 0;
}