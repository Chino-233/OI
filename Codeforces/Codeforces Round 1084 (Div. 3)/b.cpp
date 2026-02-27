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
        ll a[n+10]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                cout<<1<<endl;
                break;
            }
            if(i==n-2){
                cout<<n<<endl;
            }
        }
    }
    return 0;
}