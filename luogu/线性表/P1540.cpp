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
    ll m,n;
    cin>>m>>n;
    queue<int>q;
    ll ans=0;
    ll used[1101]={0};
    while (n--)
    {
        ll temp;
        cin>>temp;
        if(used[temp]==0){
            ans++;
            if(q.size()==m){
                used[q.front()]=0;
                q.pop();
            }
            q.push(temp);
            used[temp]=1;
        }
    }
    cout<<ans;
    return 0;
}