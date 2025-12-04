#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll f[1010];
int getnum(int num){
    if(num==1){
        return 1;
    }
    else if(f[num]!=-1){
        return f[num];
    }
    ll x=num;
    ll sum=1;
    for(int i=1;i<=x/2;i++){
        sum+=getnum(i);
    }
    f[num]=sum;
    return sum;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n;
    cin>>n;
    for(int i=0;i<1010;i++){
        f[i]=-1;
    }
    f[1]=1;
    getnum(n);
    cout<<f[n];
    return 0;
}