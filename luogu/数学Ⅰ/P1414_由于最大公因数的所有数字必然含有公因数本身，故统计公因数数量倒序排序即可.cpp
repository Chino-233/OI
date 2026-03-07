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
    ll arr[n+10]={0};
    map<ll,ll>mp;
    for(int j=0;j<n;j++){
        cin>>arr[j];
        for(int i=1;i<=arr[j]/i;i++){
            if(arr[j]%i==0){
                mp[i]++;
                if(i*i!=arr[j]){
                    mp[arr[j]/i]++;
                }
            }
        }
    }
    ll f[n+10]={0};
    for(auto i:mp){
        f[i.second]=max(f[i.second],i.first);
    } 
    ll nownum=1;
    stack<ll>s;
    for(int i=n;i>=1;i--){
        nownum=max(nownum,f[i]);
        s.push(nownum);
    }
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    
    return 0;
}