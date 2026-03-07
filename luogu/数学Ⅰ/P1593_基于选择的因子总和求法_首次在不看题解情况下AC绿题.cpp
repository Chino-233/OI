#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
const int MOD=9901;
#define ll long long
ll getnum(ll a,ll b,ll mod){
    ll temp=1;
    while (b>0)
    {
        if(b&1==1){
            temp*=a;
            temp%=mod;
        }
        b>>=1;
        a*=a;
        a%=mod;
    }
    return temp;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll a,b;
    cin>>a>>b;
    ll ans=1;
    for(int i=2;i<=a;i++){
        if(i==9901){
            cout<<"";
        }
        if(a%i==0){
            ll temp=0;
            while (a%i==0)
            {
                temp++;
                a/=i;
            }
            temp*=b;
            ll divnum=1-i;
            divnum=(divnum%MOD+MOD)%MOD;
            temp++;
            if(divnum==0){
                ans*=temp;
            }
            else{
                divnum=getnum(divnum,MOD-2,MOD);
                ans*=divnum;
                ans%=MOD;
                ll mulnum=getnum(i,temp,MOD);
                mulnum=1-mulnum;
                mulnum=(mulnum%MOD+MOD)%MOD;
                ans*=mulnum;
                ans%=MOD;
            }

        }
    }
    cout<<ans;
    return 0;
}