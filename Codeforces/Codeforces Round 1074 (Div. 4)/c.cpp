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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll nowstep=1;
        ll maxstep=1;
        for(int i=1;i<n;i++){
            maxstep=max(maxstep,nowstep);
            if(arr[i]-arr[i-1]>0&&arr[i]-arr[i-1]<=1){
                nowstep++;
            }
            else if(arr[i]==arr[i-1]){
                nowstep=nowstep;
            }
            else{
                nowstep=1;
            }
            maxstep=max(maxstep,nowstep);
        }
        maxstep=max(maxstep,nowstep);
        cout<<maxstep<<endl;
        /*
        ll maxnum=-1;
        ll zeroflag=0;
        map<int,int> mp;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            mp[arr[i]]=1;
            if(arr[i]==0){
                zeroflag=1;
            }
        }
        if(!zeroflag){
            ll nownum=0;
            while (mp.find(nownum)==mp.end())
            {
                nownum++;
                if(nownum==4000){
                    break;
                }
            }
            ll temp=nownum;
            while (mp.find(nownum)!=mp.end())
            {
                nownum++;
                if(nownum==4000){
                    break;
                }
            }
            cout<<nownum-temp<<endl;
        }   
        else{
            ll nownum=0;
            while (mp.find(nownum)!=mp.end())
            {
                nownum++;
            }
            ll lownum=0;
            while (mp.find(lownum)!=mp.end())
            {
                lownum--;
            }
            cout<<nownum-lownum-1<<endl;
        }
        */
    }
    
    return 0;
}