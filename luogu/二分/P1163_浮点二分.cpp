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
    ll w0,w,m;
    cin>>w0>>w>>m;
    if(w*m==w0){
        cout<<"0.0";//由于0只会输出0，不会输出0.0，特判
        return 0;
    }
    double l=0.0005;
    double r=3.0;
    double ans=0;
    while (l-r<0.00000001)
    {
        double mid=l+(r-l)/2;//如果l为0会有除以0的RE
        ll sum=1;double nownum=w0;
        for(;sum<=m+1;sum++){
            double temp=nownum*mid;
            nownum+=temp;
            if(nownum-w<0.000000001){
                break;
            }
            nownum-=w;
        }
        if(sum<=m){  
            ans=mid;
            l=mid+0.0005;
        }
        else{
            r=mid-0.0005;
        }
    }
    cout<<fixed<<setprecision(1)<<ans*100;
    return 0;
}