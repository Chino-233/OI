#include <bits/stdc++.h>
using namespace std;

//const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll n;
struct point
{
    ll x,y;
};
double mindistance=(double)0x3f3f3f3f3f;
ll used[N+10];
double distan[N+10][N+10];
point po[N+10];
double getdis(point a,point b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
void dfs(ll choosenum,double dis,ll nowpos){
    if(dis>=mindistance){
        return;
    }
    if(choosenum==n){
        mindistance=min(mindistance,dis);
        return;
    }
    for(int i=1;i<=n;i++){
        if(used[i]==1){
            continue;
        }
        used[i]=1;
        dfs(choosenum+1,dis+distan[nowpos][i],i);
        used[i]=0;
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    cin>>n;
    po[0]={0,0};
    for(int i=1;i<=n;i++){
        cin>>po[i].x>>po[i].y;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
           distan[i][j]=getdis(po[i],po[j]);
        }
    }
    dfs(0,0,0);
    cout<<fixed<<setprecision(2)<<mindistance;
    return 0;
}