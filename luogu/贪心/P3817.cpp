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
    ll m;
    cin>>m;
    ll a[n+10]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum=0;
    for(int i=0;i<n-1;i++){
        if(a[i]+a[i+1]>m){
            ll temp=(a[i]+a[i+1])-m;
            sum+=temp;
            if(temp<=a[i+1]){
                a[i+1]-=temp;
            }
            else{
                temp-=a[i+1];
                a[i+1]=0;
                a[i]-=temp;
            }
        }
    }
    cout<<sum;
    return 0;
}