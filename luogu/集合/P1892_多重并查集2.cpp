#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 3000;
#define ll int
ll f[N];
ll n;
ll ans;
ll find(ll n1){
    if(f[n1]!=n1){
        f[n1]=find(f[n1]);
    }
    return f[n1];
}
ll add(ll a,ll b){
    ll temp1=find(a);
    ll temp2=find(b);
    if(temp1!=temp2){
        f[temp2]=temp1;
    }
    return 1;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ans=1;
    cin>>n;
    ll m;
    cin>>m;
    for(int i=1;i<=2*n;i++){
        f[i]=i;
    }
    for(int i=0;i<m;i++){
        string s;
        cin>>s;
        ll p,q;
        cin>>p>>q;
        if(s=="F"){
            add(p,q);
        }
        else{
            add(p,q+n);
            add(q,p+n);
        }
    }
    for(int i=1;i<=n;i++){
        f[i]=find(f[i]);
    }
    set<ll>s;
    for(int i=1;i<=n;i++){
        s.insert(find(f[i]));
    }
    cout<<s.size();
    return 0;
}