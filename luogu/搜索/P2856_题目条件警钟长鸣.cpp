#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 300;
#define ll long long
struct point{
    ll x,y;
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll m;
    cin>>m;
    ll arr[N+10][N+10];
    ll used[N+10][N+10];
    memset(arr,-1,sizeof(arr));
    memset(used,0x3f3f3f3f,sizeof(used));
    for(int i=0;i<m;i++){
        ll x,y,t;
        cin>>x>>y>>t;
        used[x][y]=min(t,used[x][y]);
        if(x-1>=0){
            used[x-1][y]=min(t,used[x-1][y]);
        }
        if(x+1<=400){
            used[x+1][y]=min(t,used[x+1][y]);
        }
        if(y-1>=0){
            used[x][y-1]=min(t,used[x][y-1]);
        }
        if(y+1<=400){
            used[x][y+1]=min(t,used[x][y+1]);
        }
    }
    queue<point>q;
    q.push((point){0,0});
    arr[0][0]=0;
    ll flag=0;
    while (!q.empty())
    {
        ll ux=q.front().x;
        ll uy=q.front().y;
        q.pop();
        if(used[ux][uy]==0x3f3f3f3f3f3f3f3f){
            cout<<arr[ux][uy];
            flag=1;
            break;
        }
        if(ux-1>=0){
            if(used[ux-1][uy]>arr[ux][uy]+1&&arr[ux-1][uy]==-1){
                arr[ux-1][uy]=arr[ux][uy]+1;
                q.push((point){ux-1,uy});
            }
        }
        if(uy-1>=0){
            if(used[ux][uy-1]>arr[ux][uy]+1&&arr[ux][uy-1]==-1){
                arr[ux][uy-1]=arr[ux][uy]+1;
                q.push((point){ux,uy-1});
            }
        }
        if(uy+1<=400){
            if(used[ux][uy+1]>arr[ux][uy]+1&&arr[ux][uy+1]==-1){
                arr[ux][uy+1]=arr[ux][uy]+1;
                q.push((point){ux,uy+1});
            }
        }
        if(ux+1<=400){
            if(used[ux+1][uy]>arr[ux][uy]+1&&arr[ux+1][uy]==-1){
                arr[ux+1][uy]=arr[ux][uy]+1;
                q.push((point){ux+1,uy});
            }
        }
    }
    if(!flag){
        cout<<-1;
    }
    return 0;
}