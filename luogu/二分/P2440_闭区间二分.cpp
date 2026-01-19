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
    ll n,k;
    cin>>n>>k; 
    ll le[n+10]={0};
    ll sumle=0;
    for(int i=0;i<n;i++){
        cin>>le[i];
        sumle+=le[i];
    }
    ll r=(ll)sumle/k;
    if(r==0){
        cout<<0;
        return 0;
    }
    ll l=1;
    ll ans=0;
    while (l<=r)
    {
        ll mid=l+(ll)(r-l)/2;//如果l为0会有除以0的RE
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=(ll)le[i]/mid;
        }
        if(sum>=k){  
            ans=mid; 
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans;
    
    return 0;
}