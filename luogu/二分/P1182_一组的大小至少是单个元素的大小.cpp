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
    ll n,m;
    cin>>n>>m;
    ll arr[n+10]={0};
    ll l=1;
    ll r=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        r+=arr[i];//以全部值的总和为上界
        l=max(l,arr[i]);//以单个元素或者说单个元素构成的组为下界。因为再往下同样符合条件，但是事实上是不可能有这些情况的，或者说此时组别将一个至少为x的元素视作了一个更小的组别
    }
    ll ans=0;
    while (l<=r)
    {
        ll mid=l+(ll)(r-l)/2;//如果l为0会有除以0的RE
        ll sum=1;ll nownum=0;
        for(int i=1;i<=n;i++){
            nownum+=arr[i];
            if(nownum>mid){
                nownum=arr[i];
                sum++;
            }
        }
        if(sum<=m){  
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans;
    return 0;
}