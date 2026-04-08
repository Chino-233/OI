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
    ll a,b;
    cin>>a>>b;
    if(a>=4||b==0){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
    return 0;
}