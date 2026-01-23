#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 1000;
#define ll long long
ll b1[N];//y
ll b2[N];//x+y，左上到右下
ll b3[N];//x-y+15 右上到左下，+15保证恒正。
ll a[N];//第 i 个数字表示在第 i 行的相应位置有一个棋子
ll n;//所有dfs都要用的n；
ll ans;//答案个数；
void dfs(ll x){//x是行。
    if(x>n){
        ans++;
        if(ans<=3){
            for(int i=1;i<=n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    for(int i=1;i<=n;i++){
        if(x==1&&i==2){
            ll tem;
        }
        if(b1[i]==0&&b2[x+i]==0&&b3[x-i+15]==0){
            b1[i]=1;b2[x+i]=1;b3[x-i+15]=1;a[x]=i;
            dfs(x+1);
            b1[i]=0;b2[x+i]=0;b3[x-i+15]=0;a[x]=0;
        }
    }
    return;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    cin>>n;
    dfs(1);
    cout<<ans;
    return 0;
}