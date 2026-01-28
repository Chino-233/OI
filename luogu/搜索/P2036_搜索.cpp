#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll n;
ll diffnum=0x3f3f3f3f3f3f3f;
ll sour[N+10];ll bad[N+10];
void dfs(ll s,ll b,ll pos){
    if(s!=1){
        diffnum=min(abs(s-b),diffnum);
    }
    if(pos==n){
        return;
    }
    dfs(s*sour[pos],b+bad[pos],pos+1);
    dfs(s,b,pos+1);
    return;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>sour[i]>>bad[i];
    } 
    dfs(1,0,0);
    cout<<diffnum; 
    return 0;
}