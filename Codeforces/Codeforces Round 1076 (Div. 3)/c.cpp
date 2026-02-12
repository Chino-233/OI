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
        ll n,q;
        cin>>n>>q;
        ll a[n+10]={0};
        ll b[n+10]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        for(int i=1;i<=n;i++){
            a[i]=max(a[i],b[i]);
        }
        ll nowmaxnum=-1;
        for(int i=n;i>=1;i--){
            nowmaxnum=max(a[i],nowmaxnum);
            a[i]=max(a[i],nowmaxnum);
        }
        ll sum[n+10]={0};
        sum[1]=a[1];
        for(int i=2;i<=n;i++){
            sum[i]=sum[i-1]+a[i];
        }
        for(int i=0;i<q;i++){
            ll l,r;
            cin>>l>>r;
            cout<<sum[r]-sum[l-1]<<" ";
        }
        cout<<endl;
    }
    return 0;
}