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
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n+10]={0};
        ll sum=0;
        ll d=gcd(n,m);
        set<ll>s;
        map<ll,ll>mp;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(s.find(a[i])==s.end()){
                mp[a[i]]=1;
                s.insert(a[i]);
            }
            else{
                mp[a[i]]++;
            }
            sum+=a[i];
        }
        if(n%2==1){
            cout<<0<<endl;
            continue;
        }
        ll flag=0;
        for(auto x:s){
            if(mp[x]%2==1){
                cout<<0<<endl;
                flag=1;
                break;
            }
        }
        if(!flag){
            cout<<1<<endl;
        }
    }
    return 0;
}