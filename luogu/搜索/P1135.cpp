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
    ll n,a,b;
    cin>>n>>a>>b;
    ll arr[n+10]={0};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    ll steep[n+10]={0};
    memset(steep,-1,sizeof(steep));
    steep[a]=0;
    queue<int>q;
    q.push(a);
    while (!q.empty())
    {
        ll t=q.front();
        q.pop();
        if(t+arr[t]<=n&&steep[t+arr[t]]==-1){
            steep[t+arr[t]]=steep[t]+1;
            q.push(t+arr[t]);
        }
        if(t-arr[t]>=1&&steep[t-arr[t]]==-1){
            steep[t-arr[t]]=steep[t]+1;
            q.push(t-arr[t]);
        }
    }
    cout<<steep[b]; 
    return 0;
}