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
        ll p[n+10]={0};
        ll maxnum=-1;
        ll pos=1;
        for(int i=1;i<=n;i++){
            cin>>p[i];
            if(p[i]>maxnum){
                maxnum=p[i];
                pos=i;
            }
        }
        swap(p[1],p[pos]);
        for(int i=1;i<=n;i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}