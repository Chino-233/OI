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
    ll m[n+10]={0};
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    sort(m,m+n);
    ll nowchioce=1;
    ll ans=m[0];
    for(int i=1;i<n;i++){
        if(nowchioce>=m[i]){
            ans=0;
            break;
        }
        else{
            ll temp=(m[i]-nowchioce)%1000000007;
            ans*=temp;
            ans%=1000000007;
        }
        nowchioce++;
    }
    cout<<ans;
    return 0;
}