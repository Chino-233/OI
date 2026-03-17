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
    vector<vector<ll>>edge(n+10);
    for(int i=0;i<m;i++){
        ll u,v;
        cin>>u>>v;
        edge[v].push_back(u);
    }
    ll a[n+10]={0};
    queue<ll>q;
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
    for(int i=n;i>=1;i--){
        if(a[i]==i){
            q.push(i);
        }
        else{
            continue;
        }
        while (!q.empty())
        {
            ll num=q.front();
            q.pop();
            for(auto x:edge[num]){
                if(a[x]==x&&x<i){
                    a[x]=i;
                    q.push(x);
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}