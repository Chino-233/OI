#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct food{
    ll sour;
    ll bad;
};
ll n;
food arr[20];
ll getsour(ll num){
    ll sum=1;
    ll temp=num;
    for(int i=0;i<n;i++){
       if(temp & (1<<i)){
        sum*=arr[i].sour;
       }
    }
    return sum;
}
ll getbad(ll num){
    ll sum=0;
    ll temp=num;
    for(int i=0;i<n;i++){
       if(temp & (1<<i)){
        sum+=arr[i].bad;
       }
    }
    return sum;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    cin>>n;
    ll num=1145141919;
    for(int i=0;i<n;i++){
        cin>>arr[i].sour>>arr[i].bad;
    }
    ll choice=1<<n;
    for(int c=1;c<choice;c++){
        num=min(abs(getsour(c)-getbad(c)),num);
    }
    cout<<num;
    return 0;
}