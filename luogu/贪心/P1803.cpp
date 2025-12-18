#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct coin{
    ll start;
    ll end;
};
bool cmp(coin a,coin b){
    if(abs(a.end-b.end)<0.00001){
        return a.start>b.start;
    }
    return a.end<b.end;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n,t;
    cin>>n;
    coin c[n+10];
    for(int i=0;i<n;i++){
        cin>>c[i].start; 
        cin>>c[i].end;
    }
    sort(c,c+n,cmp);
    ll nowtime=0;
    ll sum=0;
    for(int i=0;i<n;i++){
        if(c[i].start>=nowtime){
            sum++;
            nowtime=c[i].end;
        }
    }
    cout<<sum;
    return 0;
}