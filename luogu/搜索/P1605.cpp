#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct point{
    ll x,y;
};
ll arr[10][10];
ll used[10][10];
ll fx,fy,ans;
ll n,m;
void dfs(point nowpos){
    ll ux=nowpos.x;
    ll uy=nowpos.y;
    if(ux==fx&&uy==fy){
        ans++;
        return;
    }
    if(ux>1){
        if(arr[ux-1][uy]!=-1&&used[ux-1][uy]==0){
            used[ux-1][uy]=1;
            dfs((point){ux-1,uy});
            used[ux-1][uy]=0;
        }
    }
    if(ux<n){
        if(arr[ux+1][uy]!=-1&&used[ux+1][uy]==0){
            used[ux+1][uy]=1;
            dfs((point){ux+1,uy});
            used[ux+1][uy]=0;
        }
    }
    if(uy>1){
        if(arr[ux][uy-1]!=-1&&used[ux][uy-1]==0){
            used[ux][uy-1]=1;
            dfs((point){ux,uy-1});
            used[ux][uy-1]=0;
        }
    }
    if(uy<m){
        if(arr[ux][uy+1]!=-1&&used[ux][uy+1]==0){
            used[ux][uy+1]=1;
            dfs((point){ux,uy+1});
            used[ux][uy+1]=0;
        }
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll t;
    cin>>n>>m>>t;
    ll sx,sy;
    cin>>sx>>sy>>fx>>fy;
    for(int i=0;i<t;i++){
        ll ux,uy;
        cin>>ux>>uy;
        arr[ux][uy]=-1;
    }
    used[sx][sy]=1;
    dfs((point){sx,sy});
    cout<<ans;
    return 0;
}