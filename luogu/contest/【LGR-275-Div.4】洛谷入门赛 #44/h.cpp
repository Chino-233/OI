#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n,m,d;
    cin>>n>>m>>d;
    ll a[n+10][m+10];
    memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    ll ans=-1;
    for(int l=1;l<=n;l++){
        for(int r=1;r<=n;r++){
            for(int u=1;u<=m;u++){
                for(int down=1;down<=m;down++){
                    ll color=0;
                    ll num=0;
                    ll usedcolor[1000]={0};
                    for(int i=l;i<=r;i++){
                        for(int j=u;j<=down;j++){
                            num++;
                            if(usedcolor[a[i][j]]==0){
                                color++;
                                usedcolor[a[i][j]]=1;
                            }
                        }
                    }
                    if(color==d){
                        ans=max(ans,num);
                    }
                }
            }
        }
    }
    if(ans==-1){
        cout<<"Hrk"<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}