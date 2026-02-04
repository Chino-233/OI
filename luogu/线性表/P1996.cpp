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
    ll n,m;
    cin>>n>>m;
    queue<int>q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    ll nownum=1;
    while (!q.empty())
    {
        ll temp=q.front();
        if(nownum!=m){
            q.push(q.front());
        }
        else{
            cout<<q.front()<<" ";
            nownum=0;
        }
        q.pop();
        nownum++;
    }
    return 0;
}