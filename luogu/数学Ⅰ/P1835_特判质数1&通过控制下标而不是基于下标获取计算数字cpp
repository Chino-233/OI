#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 500;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n;
    n=50000;
    bool used[n+10]={0};
    queue<ll>q;
    for(int i=2;i<=n;i++){
        if(!used[i]){
            q.push(i);
            for(int j=i<<1;j<=n;j+=i){
                used[j]=1;
            }
        }
    }
    ll l,r;
    cin>>l>>r;
    ll used1[N+10]={0};
    memset(used1,0,sizeof(used1));
    ll num=r-l+1;
    if(l==1){
        used1[0]=1;
        num--;
    }
    while (!q.empty())
    {
        ll prime=q.front();
        q.pop();
        for(ll j=max(2ll,((l-1)/prime)+1)*prime;j<=r;j+=prime){
            if(!used1[j-l]){
                num--;
                used1[j-l]=1;
            }
        }
    }
    cout<<num;
    return 0;
}