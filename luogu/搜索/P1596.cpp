#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct point{
    ll x,y;
};
ll dirctionx[8]={1,1,1,0,0,-1,-1,-1};
ll dirctiony[8]={1,0,-1,1,-1,1,0,-1};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n,m;
    cin>>n>>m;
    ll arr[n+10][m+10];
    memset(arr,0,sizeof(arr));
    for(int i=1;i<=n;i++){
        getchar();
        for(int j=1;j<=m;j++){
            char temp;
            temp=getchar();
            if(temp=='W'){
                arr[i][j]=1;
            }
            else if(temp=='.'){
                arr[i][j]=2;
            }
        }
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i][j]==2||arr[i][j]==3){
                continue;
            }
            else if(arr[i][j]==1){
                ans++;
                queue<point>q;
                q.push((point){i,j});
                arr[i][j]=3;
                while (!q.empty())
                {
                    ll temp=1;
                    ll ui=q.front().x;
                    ll uj=q.front().y;
                    q.pop();
                    for(int k=0;k<8;k++){
                        ll ux=dirctionx[k]+ui;
                        ll uy=dirctiony[k]+uj;
                        if(ux>=1&&ux<=n&&uy>=1&&uy<=m&&arr[ux][uy]==1){
                            q.push((point){ux,uy});
                            arr[ux][uy]=3;
                        }
                    }
                }
            }
        }
    }
    cout<<ans;
    return 0;
}