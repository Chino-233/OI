#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
// const int N = 10;
#define ll long long
struct lcanode{
    ll n;
    ll num;
};
ll visted[N+10]={0};
ll parent[N+10]={0};
vector<int> edge[N+10];
vector<lcanode> findlca[N+10];
ll ancestor[N+10];//必须要添加的数组
ll result[N+10];
ll find(ll u){
    if(parent[u]!=u){
        parent[u]=find(parent[u]);//①通过递归才能沿途一路赋值，操作的是父指针
    }
    return parent[u];
}
void merge(ll x,ll y){
    x=find(x);
    y=find(y);
    if(x!=y){
        parent[x]=y;//根据并查集的意义，直接将两个头连接到一起即可。
    }
}
void dfs(int u){
    visted[u]=1;
    ancestor[find(u)]=u;//切换u所在集合的LCA。
    for(auto v:edge[u]){
        if(!visted[v]){
            dfs(v);
            merge(u,v);
            ancestor[find(u)]=u;//保持u所在集合的LCA。
        }
    }
    for(auto l:findlca[u]){//以自己的状态为核心，遍历完了再看自己的。
        if(visted[l.n]){
            result[l.num]=ancestor[find(l.n)];
        }
    }
        
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n,m,s;
    cin>>n>>m>>s;
    for(int i=1;i<=n;i++){
        parent[i]=i;
        ancestor[i]=0;//初始化为零，一开始每个集合都没有自己的LCA。
    }
    for(int i=1;i<n;i++){
        ll x,y;
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    for(int i=0;i<m;i++){
        lcanode a,b;
        cin>>a.n>>b.n;
        a.num=i;
        b.num=i;
        if(a.n==b.n){
            result[i]=a.n;
            continue;
        }
        findlca[a.n].push_back(b);
        findlca[b.n].push_back(a);
    }
    dfs(s);
    for(int i=0;i<m;i++){
        cout<<result[i]<<endl;
    }
    
    return 0;
}