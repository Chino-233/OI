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
        ll n,m,k;
        cin>>n>>m>>k;
        ll a[n+10]={0};
        ll b[m+10]={0};
        ll aLmax[n+10]={0};
        ll aRmax[n+10]={0};
        for(int i=0;i<=n;i++){
            aLmax[i]=-114514191981000;
            aRmax[i]=114514191981000;
        }
        map<ll,ll> mp;  
        map<ll,ll> mpLmax;
        map<ll,ll> mpRmax;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=m;i++){
            cin>>b[i];
            for(int j=1;j<=n;j++){
                ll temp=b[i]-a[j];
                if(temp>=0){
                    aRmax[j]=min(aRmax[j],temp);
                }
                else{
                    aLmax[j]=max(aLmax[j],temp);
                }
            }
            mp[b[i]]=1;
        }
        for(int i=1;i<=n;i++){
            if(mpLmax.find(aLmax[i])==mpLmax.end()){
                mpLmax[aLmax[i]]=1;
            }
            else{
                mpLmax[aLmax[i]]++;
            }
            if(mpRmax.find(aRmax[i])==mpRmax.end()){
                mpRmax[aRmax[i]]=1;
            }
            else{
                mpRmax[aRmax[i]]=mpRmax[aRmax[i]]+1;
            }
        }
        ll nowrobot=n;
        string op;
        cin>>op;
        ll use=0;
        ll maxuse=0;
        ll minuse=0;
        for(int i=0;i<k;i++){
            if(op[i]=='L'){
                use--;
            }
            else if(op[i]=='R'){
                use++;
            }
            if(maxuse<use){
                maxuse=max(use,maxuse);
                if(mpRmax.find(maxuse)!=mpRmax.end()){
                    nowrobot-=mpRmax[maxuse];
                }
                /*
                for(int i=1;i<=n;i++){
                    if(booma[i]==1){
                        continue;
                    }
                    if(mp[a[i]+maxuse]==1){
                        booma[i]=1;
                        nowrobot--;
                    }
                }
                */
            }
            if(minuse>use){
                minuse=min(use,minuse);
                if(mpLmax.find(minuse)!=mpLmax.end()){
                    nowrobot-=mpLmax[minuse];
                }
                
                /*
                for(int i=1;i<=n;i++){
                    if(booma[i]==1){
                        continue;
                    }
                    if(mp[a[i]+minuse]==1){
                        booma[i]=1;
                        nowrobot--;
                    }
                }
                */
            }
            cout<<nowrobot<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}