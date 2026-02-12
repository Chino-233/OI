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
        ll n,x;
        cin>>n>>x;
        ll a[n+10]={0};
        ll b[n+10]={0};
        ll c[n+10]={0};
        ll sumnorollback=0;
        ll maxrollback=0;
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i]>>c[i];
            sumnorollback+=a[i]*(b[i]-1);
            maxrollback=max(a[i]*b[i]-c[i],maxrollback);
        }
        ll flag=0;
        if(maxrollback==0){
            if(sumnorollback<x){
                cout<<-1<<endl;
                continue;
            }
        }
        if(x<=sumnorollback){
            cout<<0<<endl;
            continue;
        }
        ll ans=0;
        x-=sumnorollback;
        ans+=(ll)(x/maxrollback);
        x%=maxrollback;
        if(x>0){
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}