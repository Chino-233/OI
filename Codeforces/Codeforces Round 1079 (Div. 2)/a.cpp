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
        ll x;
        cin>>x;
        ll ans=0;
        for(int i=1;i<200;i++){
            ll temp=x+i;
            ll ans1=0;
            while (temp>0)
            {
                ans1+=temp%10;
                temp/=10;
            }
            if(ans1==i){
                ans++;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}