#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll f[N+10];
ll find(ll n){
    if(f[n]!=n){
        f[n]=find(f[n]);
    }
    return f[n];
}
ll add(ll a,ll b){
    ll a1=find(a);
    ll a2=find(b);
    if(a1==a2){
        return 0;
    }
    else{
        f[a2]=a1;
        return 1;
    }
}
ll check(ll a,ll b){
    ll a1=find(a);
    ll a2=find(b);
    if(a1==a2){
        return 1;
    }
    return 0;
}
struct relate
{
    ll i,j,e;
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll flag=0;
        set<ll>s;
        queue<relate>ra;
        queue<relate>ra1;
        for(int k=0;k<n;k++){
            ll i,j,e;
            cin>>i>>j>>e;
            s.insert(i);
            s.insert(j);
            if(e==1){
                ra.push(relate{i,j,e});
            }
            else{
                ra1.push(relate{i,j,e});
            }
        }
        ll cut=0;
        map<ll,ll>mp;
        for(auto i:s){
            mp[i]=cut++;
        }
        for(int i=1;i<=cut;i++){
            f[i]=i;
        }
        while (!ra.empty())
        {
            ll i=ra.front().i;
            ll j=ra.front().j;
            ll e=ra.front().e;
            if(e==1){
                add(mp[i],mp[j]);
            }
            ra.pop();
        }
        while (!ra1.empty())
        {
            ll i=ra1.front().i;
            ll j=ra1.front().j;
            if(check(mp[i],mp[j])){
                flag=1;
                break;
            }
            ra1.pop();
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}