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
        ll s,k,m;
        cin>>s>>k>>m;
        ll zero=0;
        if(s<=k){
            cout<<max(s-(m%k),zero);
        }
        else{
            ll temp=m/k;
            if(temp%2==1){
                cout<<max(zero,k-(m%k));
            }
            else{
                cout<<s-(m%k);
            }
        }
        cout<<endl;
    }
    
    return 0;
}