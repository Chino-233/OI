#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct coin{
    ll m;
    ll v;
    double avg;
};
bool cmp(coin a,coin b){
    return a.v*b.m>b.v*a.m;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n,t;
    cin>>n>>t;
    coin c[n+10];
    for(int i=0;i<n;i++){
        cin>>c[i].m;
        cin>>c[i].v;
        c[i].avg=(double)c[i].v/c[i].m;
    }
    sort(c,c+n,cmp);
    double sum=0;
    for(int i=0;i<n;i++){
        if(t>=c[i].m){
            t-=c[i].m;
            sum+=c[i].v;
        }
        else{
            sum+=t*c[i].avg;
            break;
        }
    }
    printf("%.2f",sum);
    return 0;
}