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
    ll nowtime=0;
    
    for(int i=0;i<n;i++){
        ll c;
        cin>>c;
        ll flag=0;
        ll nowtimewait=0x3f3f3f3f;
        for(int j=0;j<c;j++){
            ll s,t;
            cin>>s>>t;
            if(nowtime<s){
                nowtimewait=min(nowtimewait,t);
                flag=1;
            }
        }
        if(!flag){
            cout<<-1;
            break;
        }
        nowtime=nowtimewait;
        if(i==n-1){
            cout<<nowtime;
        }
    }
    return 0;
}