#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct chino{
    ll t,x,y;
};
bool cmp(chino a,chino b){
    return a.t<b.t;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n,m,q,t;
    cin>>n>>m>>q>>t;
    ll xa,ya;
    ll xb,yb;
    cin>>xa>>ya>>xb>>yb;
    queue<chino>qu;
    chino qu1[q+10];
    for(int i=0;i<q;i++)
    {
        ll t,x,y;
        cin>>t>>x>>y;
        chino c={t,x,y};
        qu1[i]=c;
    }
    sort(qu1,qu1+t,cmp);
    for(int i=0;i<q;i++)
    {
        qu.push(qu1[i]);
    }
    ll sq[n+10][m+10];
    ll sq1[n+10][m+10];
    //0:空地 1:熔岩 2:水 3:原石
    for(int i=0;i<n+10;i++){
        for(int j=0;j<m+10;j++){
            sq[i][j]=0;
            sq1[i][j]=0;
        }
    }
    sq[xa][ya]=1;
    sq[xb][yb]=2;
    ll ans[4]={0};
    while(!qu.empty()&&qu.front().t<=1){
        ans[sq[qu.front().x][qu.front().y]]++;
        qu.pop();
    }
    for(int k=2;k<=t;k++)
    {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(sq[i][j]==3){
                    sq1[i][j]=0;
                }
                else if(sq[i][j]==1||sq[i][j]==2){
                    sq1[i][j]=sq[i][j];
                }
                else if(sq[i][j]==0){
                    ll lava=0;
                    ll water=0;
                    if(i>=2){
                            if(sq[i-1][j]==1){
                                lava=1;
                            }
                            else if(sq[i-1][j]==2){
                                water=1;
                            }
                    }
                    if(i<=n-1){
                            if(sq[i+1][j]==1){
                                lava=1;
                            }
                            else if(sq[i+1][j]==2){
                                water=1;
                            }
                    }
                    if(j>=2){
                            if(sq[i][j-1]==1){
                                lava=1;
                            }
                            else if(sq[i][j-1]==2){
                                water=1;
                            }
                    }
                    if(j<=n-1){
                            if(sq[i][j+1]==1){
                                lava=1;
                            }
                            else if(sq[i][j+1]==2){
                                water=1;
                            }
                    }
                    if(lava==1&&water==0){
                        sq1[i][j]=1;
                    }
                    else if(lava==0&&water==1){
                        sq1[i][j]=2;    
                    }
                    else if(lava==1&&water==1){
                        sq1[i][j]=3;
                    }
                }

            }
        }
        for(int i=0;i<n+10;i++){
            for(int j=0;j<m+10;j++){
                sq[i][j]=sq1[i][j];
            }
        }
        while(!qu.empty()&&qu.front().t<=k){
            ans[sq[qu.front().x][qu.front().y]]++;
            qu.pop();
            if(qu.empty()){
                break;
            }
        }
        if(qu.empty()){
            break;
        }
    }
    cout<<ans[0]<<" "<<ans[2]<<" "<<ans[1]<<" "<<ans[3];
    return 0;
}