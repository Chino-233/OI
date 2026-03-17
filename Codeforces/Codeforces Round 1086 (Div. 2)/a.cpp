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
        map<ll,ll>mp;
        ll temp;
        for(int i=0;i<n*n;i++){
            cin>>temp;
            mp[temp]++;
        }
        ll flag=0;
        for(auto x:mp){
            if(x.second>n*n-n){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(!flag){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}