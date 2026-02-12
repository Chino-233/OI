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
        if(n==2){
            cout<<2<<endl;
        }
        else if(n==3){
            cout<<3<<endl;
        }
        else{
            if(n%4==0||n%6==0){
                cout<<0<<endl;
            }
            else if(n%4==1){
                cout<<1<<endl;
            }
            else if(n%4==2){
                cout<<0<<endl;
            }
            else if(n%4==3){
                cout<<1<<endl;
            }
        }
    }
    
    return 0;
}