#include <bits/stdc++.h>
using namespace std;

 const int N = 1e6 + 10;
//const int N = 10;
#define ll long long
ll parent[N+10][25]={0};
ll dep[N+10]={0};
vector<int> v1[N+10];
void dfs(int u,int fa){
    parent[u][0]=fa;
    dep[u]=dep[fa]+1;
    for(auto v:v1[u]){
        
        if(v!=fa){
            dfs(v,u);
        }
    }
}
int lca(int a,int b){
    if(dep[a]>dep[b]){
        swap(a,b);
    }
    ll diff=dep[b]-dep[a];
    for (int k = 22; k >= 0; k--) {
		if (dep[parent[b][k]] >= dep[a]) {
            b=parent[b][k];
        }
	}
    if(a==b){
        return a;
    }
    for(int k=22;k>=0;k--){
        if(parent[a][k]!=parent[b][k]){
            a=parent[a][k];
            b=parent[b][k];
        }
    }
    return parent[a][0];
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n,m,s;
    cin>>n>>m>>s;
    for(int i=0;i<n;i++){
        for(int j=1;j<23;j++){
            parent[i][j]=0;
        }
        dep[i]=0;
    }
    for(int i=0;i<n-1;i++){
        ll x,y;
        cin>>x>>y;
        v1[y].push_back(x);
        v1[x].push_back(y);
    }
    dfs(s,0);
    for(int j=1;j<23;j++){
        int a=1;
        for(int i=1;i<=n;i++){
            parent[i][j]=parent[parent[i][j-1]][j-1];
        }
    }

    while (m--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<lca(a,b)<<endl;
    }
    
    return 0;
}