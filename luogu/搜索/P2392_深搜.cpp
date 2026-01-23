#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll maxdeep;
ll maxnum;
ll sum;
ll nownum;
ll s1[N];
void dfs(ll x){
    if(x>maxdeep){
        maxnum=max(maxnum,nownum);
        return;
    }
    if(s1[x]+nownum<=sum/2){
        nownum+=s1[x];
        dfs(x+1);
        nownum-=s1[x];
    }
    dfs(x+1);
    return;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll s[100]={0};
    for(int i=0;i<4;i++){
        cin>>s[i];
    }
    ll ans=0;
    for(int i=0;i<4;i++){
        sum=0;
        for(int j=1;j<=s[i];j++){
            cin>>s1[j];
            sum+=s1[j];
        }
        maxnum=0;
        maxdeep=s[i];
        nownum=0;
        dfs(1);
        ans+=(sum-maxnum);
    }
    cout<<ans;
    return 0;
}