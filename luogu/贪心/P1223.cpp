#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct coin{
    ll id;
    double v;
};
bool cmp(coin a,coin b){
    if(abs(a.v-b.v)<0.00001){
        return a.id<b.id;
    }
    return a.v<b.v;
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
        c[i].id=i+1;
        cin>>c[i].v;
    }
    sort(c,c+n,cmp);
    double sum=0;
    double nowtime=0;
    for(int i=0;i<n;i++){
        cout<<c[i].id<<" ";
        sum+=nowtime;
        nowtime+=c[i].v;
    }
    cout<<endl;
    sum/=n;
    printf("%.2f",sum);
    return 0;
}