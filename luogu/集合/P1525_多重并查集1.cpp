#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct relate{
    ll x,y;
    ll c;
};
ll f[2*N+10]={0};
ll find(ll n){
    if(f[n]!=n){
        f[n]=find(f[n]);
    }
    return f[n];
}
ll add(ll a,ll b){
    ll a1=find(a);
    ll a2=find(b);
    if(a1==a2){
        return 0;
    }
    else{
        f[a2]=a1;
        return 1;
    }
}
ll check(ll a,ll b){
    ll a1=find(a);
    ll a2=find(b);
    if(a1==a2){
        return 1;
    }
    return 0;
}
struct point{
    ll x,y;
    bool operator<(const point& a) const {
            // 3. 必须同时比较 x 和 y，否则 x 相同 y 不同的边会被视为重复
            if (x != a.x) return x < a.x;
            return y < a.y;
        }
};
bool cmp(relate a,relate b){
    return a.c>b.c;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n,m;
    cin>>n>>m;
    relate re[m+10];
    map<point,ll> c;
    for(int i=0;i<m;i++){
        cin>>re[i].x>>re[i].y>>re[i].c;
        c[(point){re[i].x,re[i].y}]=re[i].c;
        c[(point){re[i].y,re[i].x}]=re[i].c;
    }
    sort(re,re+m,cmp);
    for(int i=1;i<=2*n;i++) f[i]=i;
    set<ll>s1,s2;
    ll flag=0;
    for(int i=0;i<m;i++){
        ll x1=re[i].x;
        ll x2=re[i].y;
        ll c1=re[i].c;
        add(x1,x2+n);
        add(x2,x1+n);
        if(check(x1,x1+n)||check(x2,x2+n)){
            cout<<c1<<endl;
            flag=1;
            break;
        }
    }
    if(!flag){
        cout<<flag<<endl;
    }
    return 0;
}