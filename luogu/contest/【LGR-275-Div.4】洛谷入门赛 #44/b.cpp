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
    ll a,b,x,y,m;
    cin>>a>>b>>x>>y>>m;
    ll ans=0;
    if(x>=y){

    }
    else{
        swap(a,b);
        swap(x,y);
    }
        while (m>=y&&b>0)
        {
            m-=y;
            b--;
            ans++;  
        }
        while (m>=x&&a>0)
        {
            m-=x;
            a--;
            ans++;  
        }
    cout<<ans<<endl;
    return 0;
}