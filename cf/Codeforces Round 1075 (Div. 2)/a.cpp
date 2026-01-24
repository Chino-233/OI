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
        ll n,h,l;
        cin>>n>>h>>l;
        if(h>l){
            swap(h,l);
        }
        ll sum=0,sum1=0,sum2=0,ans=0;
        for(int i=0;i<n;i++){
            ll temp;
            cin>>temp;
            sum++;
            if(temp>h&&temp>l){
                sum--;
            }
            else if(temp>h&&temp<=l){
                sum1++;
            }
        }
        sum2=sum-sum1;
        ans+=min(sum1,sum2);
        sum1-=ans;
        sum2-=ans;
        if(sum1==0){
            ans+=sum2/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}