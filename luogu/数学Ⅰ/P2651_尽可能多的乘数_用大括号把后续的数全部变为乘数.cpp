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
        ll divnum=1;
        ll temp;
        cin>>temp;
        cin>>divnum;
        ll gcdnum=gcd(divnum,temp);
        divnum/=gcdnum;
        for(int i=2;i<n;i++){
            ll a;
            cin>>a;
            ll gcdnum=gcd(divnum,a);
            divnum/=gcdnum;
        }
        if(divnum==1){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        cout<<endl;
    }
    
    return 0;
}