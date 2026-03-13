#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll f[N+10]={0};
ll getset(ll n){
    if(f[n]!=n){
        f[n]=getset(f[n]);
    }
    return f[n];
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    while(1){
        ll n,m;
        cin>>n;
        if(n==0){
            break;
        }
        cin>>m;
        for(int i=1;i<=n;i++) f[i]=i;
        for(int i=0;i<m;i++){
            ll a,b;
            cin>>a>>b;
            ll a1=getset(a);
            ll b1=getset(b);
            if(a1!=b1){
                f[b1]=a1;
            }
        }
        set<ll>s;
        for(int i=1;i<=n;i++){
            s.insert(getset(f[i]));
        }
        cout<<s.size()-1<<endl;
    }
    return 0;
}