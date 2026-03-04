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
    ll a[N+10]={0};
    ll c[N+10]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        c[a[i]]++;
    }
    for(int i=N;i>=1;i--){
        for(int j=2*i;j<=N;j+=i){
            c[j]+=c[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<c[a[i]]-1<<endl;
    }
    return 0;
}