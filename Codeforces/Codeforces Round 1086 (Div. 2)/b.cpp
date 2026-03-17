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
        ll n,k,p,m;
        cin>>n>>k>>p>>m;
        ll arr[n+10]={0};
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        ll fistcost=0;
        if(p<=k){
            fistcost=0;
        }
        else{
            vector<ll>v;
            for(int i=1;i<=p-1;i++){
                v.push_back(arr[i]);
            }
            sort(v.begin(),v.end());
            for(int i=0;i<p-k;i++){
                fistcost+=v[i];
            }
        }
        if(m<fistcost+arr[p]){
            cout<<0<<endl;
            continue;
        }
        m-=(fistcost+arr[p]);
        ll ans=1;
        ll secondcost=0;
        if(n<=k){
            secondcost=0;
        }
        else{
            vector<ll>v;
            for(int i=1;i<=n;i++){
                if(i==p){
                    continue;
                }
                v.push_back(arr[i]);
            }
            sort(v.begin(),v.end());
            for(int i=0;i<n-k;i++){
                secondcost+=v[i];
            }
        }
        ans+=m/(secondcost+arr[p]);
        cout<<ans<<endl;
    }
    return 0;
}