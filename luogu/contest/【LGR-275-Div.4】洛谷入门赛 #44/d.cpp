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
    ll a[n+10]={0};
    ll minnouse=-1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==0&&minnouse==-1){
            minnouse=i;
        }
    }
    ll k;
    cin>>k;
    if(a[k]==0){
        cout<<k<<endl;
    }
    else{
        cout<<minnouse<<endl;
    }
    return 0;
}