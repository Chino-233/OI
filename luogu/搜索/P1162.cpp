#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct point{
    ll x,y;
};
ll dirctionx[4]={1,0,-1,0};
ll dirctiony[4]={0,1,0,-1};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n;
    cin>>n;
    ll arr[n+10][n+10];
    memset(arr,0,sizeof(arr));
    for(int i=1;i<=n;i++){;
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    ll ans=0;
    map<int,int> rimp;
    ll ri=2;
    rimp[ri]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(arr[i][j]>=1){
                continue;
            }
            else if(arr[i][j]==0){
                ans++;
                queue<point>q;
                q.push((point){i,j});
                arr[i][j]=ri;
                while (!q.empty())
                {
                    ll temp=1;
                    ll ui=q.front().x;
                    ll uj=q.front().y;
                    q.pop();
                    for(int k=0;k<4;k++){
                        ll ux=dirctionx[k]+ui;
                        ll uy=dirctiony[k]+uj;
                        if(ux>=1&&ux<=n&&uy>=1&&uy<=n&&arr[ux][uy]==0){
                            q.push((point){ux,uy});
                            arr[ux][uy]=ri;
                            if(ux==1||ux==n||uy==1||uy==n){
                                rimp[ri]=1;
                            }
                        }
                    }
                }
                ri++;
                rimp[ri]=0;
            }
        }
    }
    for(int i=1;i<=n;i++){;
        for(int j=1;j<=n;j++){
            if(arr[i][j]==1){
                cout<<arr[i][j]<<" ";
            }
            else if(arr[i][j]>=1&&rimp[arr[i][j]]==0){
                cout<<2<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}