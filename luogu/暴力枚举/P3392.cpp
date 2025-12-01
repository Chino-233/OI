#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct nodes{
    ll w;
    ll r;
    ll b;
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n,m;
    cin>>n>>m;
    nodes arr[n+10]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char temp;
            cin>>temp;
            if(temp=='W'){
                arr[i].w++;
            }
            else if(temp=='B'){
                arr[i].b++;
            }
            else{
                arr[i].r++;
            }
        }
    }
    ll minnum=1145141919;
    ll wnum=0;
    for(int i=0;i<n-2;i++){
        wnum+=(m-arr[i].w);
        ll bnum=0;
        for(int j=i+1;j<n-1;j++){
           bnum+=(m-arr[j].b); 
            ll temp=0;
            temp+=wnum;
            temp+=bnum;
            for(int c=j+1;c<n;c++){
                temp+=(m-arr[c].r);
            }
            minnum=min(minnum,temp);
        }
    }
    cout<<minnum;
    return 0;
}