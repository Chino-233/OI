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
    ll a,b,c;
    cin>>a>>b>>c;
    if(a<=70&&a>=30){
        cout<<a;
    }
    else{
        if((b<=70&&b>=30)){
            if((c<=70&&c>=30)){
                cout<<min(b,c);
            }
            else{
                cout<<b;
            }
        }
        else if((c<=70&&c>=30)){
            cout<<c;
        }
        else{
            cout<<0;
        }
    }
    return 0;
}