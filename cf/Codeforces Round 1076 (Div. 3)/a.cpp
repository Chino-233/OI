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
        ll n,s,x;
        cin>>n>>s>>x;
        ll sum=0;
        for(int i=0;i<n;i++){
            ll temp;
            cin>>temp;
            sum+=temp;
        }
        s-=sum;
        if(s<0){
            cout<<"NO"<<endl;
        }
        else if(s%x==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}