#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
void print2(ll n){
    cout<<2;
    if(n==0){
        cout<<"(0)";
        return;
    }
    else if(n==1){
        return;
    }
    else{
    cout<<'(';
    ll flag=0;
    for(int i=4;i>=0;i--){
        if(n&1<<i){
            if(flag){
                cout<<'+';
            }
            else{
                flag=1;
            }
            print2(i);
        }
    }
    cout<<')';
    return;      
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n;
    cin>>n;
    ll flag=0;
    for(int i=15;i>=0;i--){
        if(n&1<<i){
            if(flag){
                cout<<'+';
            }
            else{
                flag=1;
            }
            print2(i);
        }
    }
    return 0;
}