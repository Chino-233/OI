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
    ll n,m,k;
    cin>>n>>m>>k;
    set<ll> s[n+10];
    ll problem[m+10]={0};
    for(int i=1;i<=m;i++){
        s[0].insert(i);
    }
    for(int i=0;i<k;i++){
        ll op,u,v;
        cin>>op>>u>>v;
        if(op==1){
            s[problem[u]].erase(u);
            s[v].insert(u);
            problem[u]=v;
        }
        else{
            if(s[v].size()<u){
                cout<<-1<<endl;
            }
            else{
                auto temp=s[v].begin();
                for(int j=1;j<u;j++){
                    temp++;
                }
                cout<<*temp<<endl;
            }
        }
    }
    return 0;
}