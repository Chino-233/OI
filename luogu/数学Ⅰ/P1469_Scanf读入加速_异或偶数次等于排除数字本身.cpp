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
    ll n;
    cin>>n;
    ll ans=0;
    for(int i=0;i<n;i++){
        ll temp;
        //cin>>temp;
        scanf("%lld",&temp);//由于读入数据过大，只能用scanf读入。不然会T
        ans^=temp;//两次异或等于异或了滚木，用这个方法忽略偶数型数字。
    }
    cout<<ans;
    return 0;
}