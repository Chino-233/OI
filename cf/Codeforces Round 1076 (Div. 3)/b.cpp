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
    while(t--)
    {
        ll n;
        cin>>n;
        ll p[n+10]={0};
        ll pos=-1;
        ll maxbacknum=-1;
        ll maxbackpos=-1;
        for(int i=1;i<=n;i++){
            cin>>p[i];
            if(p[i]+i!=n+1&&pos==-1){
                pos=i;
            }
            else if(pos!=-1){
                if(p[i]>=maxbacknum){
                    maxbacknum=p[i];
                    maxbackpos=i;
                }
            }
        }
        if(pos==-1){
            for(int i=1;i<=n;i++){
                cout<<p[i]<<" ";
            }
        }
        else{
            for(int i=1;i<pos;i++){
                cout<<p[i]<<" ";
            }
            for(int i=maxbackpos;i>=pos;i--){
                cout<<p[i]<<" ";
            }
            for(int i=maxbackpos+1;i<=n;i++){
                cout<<p[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}