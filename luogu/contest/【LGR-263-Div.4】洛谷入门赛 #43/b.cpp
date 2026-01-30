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
    ll sum=0;
    for(int i=0;i<5;i++){
        ll temp;
        cin>>temp;
        sum+=temp;
    }
    if(sum<100){
        cout<<"Grey";
    }
    else if(sum>=100&&sum<120){
        cout<<"Blue";
    }
    else if(sum>=120&&sum<170){
        cout<<"Green";
    }
    else if(sum>=170&&sum<230){
        cout<<"Orange";
    }
    else if(sum>=230){
        cout<<"Red";
    }
    return 0;
}