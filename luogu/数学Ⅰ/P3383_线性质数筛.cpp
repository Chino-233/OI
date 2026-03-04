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
    std::ios::sync_with_stdio(0);
    ll n;
    cin>>n;
    bool used[n+10]={0};
    queue<ll>q;
    for(int i=2;i<=n;i++){
        if(!used[i]){
            q.push(i);
            for(int j=i;j<=n;j+=i){
                used[j]=1;
            }
        }
    }
    ll prime[q.size()+10]={0};
    ll pos=1;
    while (!q.empty())
    {
        prime[pos]=q.front();
        pos++;
        q.pop();
    }
    ll q1;
    cin>>q1;
    while (q1--)
    {
        ll k;
        cin>>k;
        cout<<prime[k]<<"\n";
    }
    
    return 0;
}