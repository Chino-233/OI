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
        ll n;
        cin>>n;
        ll arr[n+10]={0};
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        ll nowhave[n+10]={0};
        ll nowminnum[n+10]={0};
        ll nowmin=0;
        for(int i=1;i<=n;i++){
            nowhave[arr[i]]=1;
            if(nowmin==arr[i]){
                for(int j=1;j<=n+1;j++){
                    if(nowhave[j]!=1){
                        nowmin=j;
                        break;
                    }
                }
            }
            nowminnum[i]=nowmin;
        }
        for(int i=0;i<=n+10;i++){
            nowhave[i]=0;
        }
        nowmin=0;
        for(int i=n;i>=2;i--){
            nowhave[arr[i]]=1;
            if(nowmin==arr[i]){
                for(int j=0;j<=n+1;j++){
                    if(nowhave[j]!=1){
                        nowmin=j;
                        break;
                    }
                }
            }
            if(nowmin==nowminnum[i-1]){
                cout<<"NO"<<endl;
                break;
            }
            if(i==2){
                cout<<"YES"<<endl;
            }

        }
    }
    
    return 0;
}