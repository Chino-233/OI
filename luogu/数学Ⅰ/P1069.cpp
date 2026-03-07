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
    ll m1,m2;
    cin>>m1>>m2;
    map<ll,ll>mp;
    set<ll>prime;
    for(int i=2;i<=m1/i;i++){
        if(m1%i==0){
            mp[i]=0;
            prime.insert(i);
            while (m1%i==0)
            {
                m1/=i;
                mp[i]++;
            }
            
        }
    }
    if(m1>1){
        mp[m1]++;
        prime.insert(m1);
    }
    ll s[n+10]={0};
    ll minnum=0x3f3f3f3f;
    for(int i=0;i<n;i++){
        cin>>s[i];
        ll maxnum=0;
        for(auto x:prime){
            if(s[i]%x!=0){
                maxnum=-1;
                break;
            }
            ll num1=0;
            while (s[i]%x==0)
            {
                num1++;
                s[i]/=x;
            }
            
            ll num=mp[x];
            maxnum=max(maxnum,1+(num*m2-1)/num1);
        }
        if(maxnum!=-1){
            minnum=min(minnum,maxnum);
        }
    }
    if(minnum!=0x3f3f3f3f){
        cout<<minnum<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}