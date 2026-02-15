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
        ll f[n+10]={0};
        ll sub1[n+10]={0};
        ll sub2[n+10]={0};
        for(int i=1;i<=n;i++){
            cin>>f[i];
            sub1[i]=f[i]-f[i-1];
            sub2[i]=sub1[i]-sub1[i-1];
        }
        ll a[n+10]={0};
        a[1]=f[2];
        a[n]=f[1];
        for(int i=2;i<=n-1;i++){
            a[i]=sub2[i+1]/2;
            a[n]-=(i-1)*a[i];
            a[1]-=(i-2)*a[i];
        }
        a[n]/=(n-1);
        a[1]-=(n-2)*a[n];
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}