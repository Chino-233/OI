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
        ll n,m,d;
        cin>>n>>m>>d;
        if(d<m){
            cout<<n;
        }
        else{
            ll num=d/m+1;
            if(n%num==0){
                cout<<n/num;
            }
            else{
                cout<<n/num+1;
            }
        }
        cout<<endl;
    }
    return 0;
}