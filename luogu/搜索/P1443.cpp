#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct point{
    ll x;
    ll y;
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n,m,x,y;
    cin>>n>>m>>x>>y;
    ll arr[n+10][m+10];
    for(int i=0;i<n+10;i++){
        for(int j=0;j<m+10;j++){
            arr[i][j]=-1;
        }
    }
    queue<point>q;
    point p={x,y};
    arr[x][y]=0;
    q.push(p);
    point dirction[8]={{1,2},{2,1},{1,-2},{-1,2},{-2,1},{2,-1},{-2,-1},{-1,-2}};
    while (!q.empty())
    {
        point temp=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            if(temp.x+dirction[i].x<=n&&temp.x+dirction[i].x>0){
                if(temp.y+dirction[i].y<=m&&temp.y+dirction[i].y>0&&arr[temp.x+dirction[i].x][temp.y+dirction[i].y]==-1){
                    arr[temp.x+dirction[i].x][temp.y+dirction[i].y]=arr[temp.x][temp.y]+1;
                    point p1={temp.x+dirction[i].x,temp.y+dirction[i].y};
                    q.push(p1);
                }
            }
        }

    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}