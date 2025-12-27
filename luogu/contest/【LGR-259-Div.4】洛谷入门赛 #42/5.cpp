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
    ll n;
    cin>>n;
    double x[n+10]={0};
    double p[n+10]={0};
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    double E=0;
    double q=0;
    for(int i=0;i<n;i++){
        cin>>p[i];
        q+=p[i];
        E+=x[i]*p[i];
    }
    E/=q;
    cout<<E<<endl;
    double E1=0;
    for(int i=0;i<n;i++){
        E1+=(x[i]-E)*(x[i]-E)*p[i];
    }
    E1/=q;
    cout<<E1;
    return 0;
}