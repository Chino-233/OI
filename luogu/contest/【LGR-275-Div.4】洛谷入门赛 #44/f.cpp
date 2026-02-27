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
    ll temp=d;
    ll ans=0;
    ll flag=0;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            for(int j=1;j<=m;j++){
                if(temp==0){
                    if(a[i][j]==1){
                        temp+=d;
                        temp--;
                        ans++;
                    }
                    else{
                        flag=1;
                        break;
                    }
                }
                else{
                    temp--;
                    if(a[i][j]==1){
                        ans++;
                    }
                }

            }
        }
        else{
            for(int j=m;j>=1;j--){
                if(temp==0){
                    if(a[i][j]==1){
                        temp+=d;
                        temp--;
                        ans++;
                    }
                    else{
                        flag=1;
                        break;
                    }
                }
                else{
                    temp--;
                    if(a[i][j]==1){
                        ans++;
                    }
                }

            }
        }
        if(flag){
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}