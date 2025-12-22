#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct apple{
    ll x;
    ll y;
};
bool cmp(apple a,apple b){
    return a.y<b.y;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n,s;
    ll a,b;
    cin>>n>>s>>a>>b;
    apple arr[n+10];
    for(int i=0;i<n;i++){
        cin>>arr[i].x;
        cin>>arr[i].y;
    }
    sort(arr,arr+n,cmp);
    ll sum=0;
    for(int i=0;i<n;i++){
        if(s<arr[i].y){
            break;
        }
        if(arr[i].x<=a+b){
            s-=arr[i].y;
            sum++;
        }
    }
    cout<<sum;
    return 0;
}