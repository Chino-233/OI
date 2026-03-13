#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 100;
#define ll long long
ll n;
vector<set<ll>>v(N+10);
ll vis[N+10];
void dfs(ll num){
    if(vis[num]){
        return;
    }
    vis[num]=1;
    cout<<num<<" ";
    for(auto i:v[num]){
        dfs(i);
    }
    return;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        v[x].insert(y);
    }
    dfs(1);
    queue<ll>q;
    memset(vis,0,sizeof(vis));
    cout<<endl;
    q.push(1);
        while (!q.empty())
        {
            ll num=q.front();
            q.pop();
            if(vis[num]){
                continue;
            }
            vis[num]=1;
            cout<<num<<" ";
            for(auto i:v[num]){
                q.push(i);
            }
        }
        
    return 0;
}