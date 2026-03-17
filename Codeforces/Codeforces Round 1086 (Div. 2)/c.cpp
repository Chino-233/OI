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
        ll n;
        cin>>n;
        ll c[n+10]={0};
        ll p[n+10]={0};
        for(int i=0;i<n;i++){
            cin>>c[i]>>p[i];
        }
        double ans=0.0;
        for(int i=n-1;i>=0;i--){
            double temp=c[i]+(1-p[i]/100.0)*ans;
            ans=max(ans,temp);
        }
        cout<<fixed<<setprecision(8)<<ans<<endl;
    }
    return 0;
}