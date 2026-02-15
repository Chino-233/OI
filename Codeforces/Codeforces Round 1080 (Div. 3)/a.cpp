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
        ll temp=0;
        for(int i=0;i<n;i++){
            ll temp1=0;
            cin>>temp1;
            if(temp1==67){
                temp=1;
            }
        }
        if(temp){
            cout<<"YES";
        }
        else{
           cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}