#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll n,m;
bool judge(ll pos,ll* high){
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=max((ll)0,high[i]-pos);
    }
    if(sum<m){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    cin>>n>>m;
    ll high[n+10]={0};
    ll maxnum=-1;
    for(int i=0;i<n;i++){
        cin>>high[i];
        maxnum=max(maxnum,high[i]);
    }
    ll left=0;
    ll right=maxnum;
    ll mid=-1;
    sort(high,high+n);
    while (right-left>1)
    {
        mid=(left+right)/2;
        if(judge(mid,high)){
            left=mid;
        }
        else{
            right=mid;
        }
    }
    cout<<left<<endl; 
    return 0;
}