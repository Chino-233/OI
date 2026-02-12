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
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll d=log2(n);
        ll num=0;
        for(int i=1;i<=d;i++){
            ll n1=i;
            ll n2=i*2-1;
            ll cn1=i-1;
            ll cn2=1;
            ll cnum=1;
            for(int j=i;j<=i*2-1;j++){
                if(j>k){
                    num+=cnum;
                }
                cnum*=cn1;
                cn1--;
                cnum/=cn2;
                cn2++;
            }
        }
        if(k<d+1){
            num++;
        }
        cout<<num<<endl;
    }
    
    return 0;
}