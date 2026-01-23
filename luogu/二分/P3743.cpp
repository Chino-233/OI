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
    ll n,p;
    cin>>n>>p;
    ll a[n+10]={0};
    ll b[n+10]={0};
    ll sum=0;
    ll maxenergy=-1;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
        sum+=a[i];
        maxenergy=max(maxenergy,b[i]);
    }
    if(sum<=p){
        cout<<-1;
        return 0;
    }
    double l=0;
    double r=2500000000;
    double ans=0;
    while (l-r<-0.00001)//精度开太高会导致次数过多。
    {
        double mid=l+(r-l)/2;
        double sum1=0;
        for(int i=1;i<=n;i++){
            sum1+=min(b[i]-mid*a[i],0.0);
            if(p*mid+sum1<=0){
                break;
            }
        }
        if(p*mid+sum1<=0){
            ans=mid;
            r=mid;
        }
        else{
            l=mid;
        }
    }
    cout<<ans;
    return 0;
}