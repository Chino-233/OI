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
        ll n,m,h;
        cin>>n>>m>>h;
        ll arr[n+10]={0};
        ll usedarr[n+10]={0};
        ll restart[n+10]={0};
        ll renum=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            usedarr[i]=arr[i];
        }
        for(int uu=0;uu<m;uu++){
            ll b,c;
            cin>>b>>c;
            if(restart[b]<renum){
                usedarr[b]=arr[b]+c;
                restart[b]=renum;
            }
            else{
                usedarr[b]+=c;
            }
            if(usedarr[b]>h){
                renum++;
            }
        }
        for(int i=1;i<=n;i++){
            if(restart[i]<renum){
                usedarr[i]=arr[i];
            }
            cout<<usedarr[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}