#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 100;
#define ll long long
ll ans[N+10]={0};
ll b[N+10];
ll bn;
set<ll>s;
ll getnum(ll num){
    if(ans[num]!=-1){
        return ans[num];
    }
    ll minuse=0x3f3f3f3f;
    ll pos=upper_bound(b,b+bn,num)-b-1;
    for(ll j=pos;j>=0;j--){
        ll i=b[j];
        if(i==1){
            continue;
        }
        if(num==i){
            minuse=1;
            break;
        }
        if(num%i==0){
            minuse=min(minuse,getnum(num/i)+getnum(i));
        }
    }
    if(minuse>=0x3f3f3f3f){
        ans[num]=0x3f3f3f3f;
        return 0x3f3f3f3f;
    }
    else{
        ans[num]=minuse;
        return minuse;
    }
}
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
        ll a[n+10]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
            s.insert(a[i]);
            ans[i]=0x3f3f3f3f;
        }
        for(int i:s){
            ans[i]=1;
        }
        for(int i=1;i<=n;i++){
            if(ans[i]==-1){
                continue;
            }
            for(int j:s){
                ans[i*j]=min(ans[i*j],ans[i]+1);
            }
        }
        ll flag=0;
        for(int i:s){
            if(i==1){
                ans[1]=1;
                flag=1;
            }
        }
        if(!flag){
            ans[1]=-1;
        }
        for(int i=1;i<=n;i++){
            if(ans[i]==0x3f3f3f3f){
                cout<<-1<<" ";
            }
            else{
                cout<<ans[i]<<" ";
            }
        }
        /*
        ll pos=0;
        for(int i:s){
            b[pos]=i;
            pos++;
        }
        bn=pos;
        memset(ans,-1,sizeof(ans));
        ans[1]=0;
        for(int i=2;i<=n;i++){
            getnum(i);
        }
        */
        cout<<endl;
        while (!s.empty())
        {
            s.clear();
        }
        
        /*
        for(ll i:s){
            if(i==1){
                if(ans[i]==-1){
                    ans[i]=1;
                }
                continue;
            }
            for(int j=i;j<=n;j+=i){
                if(a[j]==-1){
                    continue;
                }
                while (a[j]%i==0)
                {
                    if(a[j]==i){
                        a[j]=-1;
                        if(ans[j]==-1){
                            ans[j]=1;
                        }
                        else{
                            ans[j]++;
                        }
                        break;
                    }
                    a[j]/=i;
                    if(ans[j]==-1){
                        ans[j]=1;
                    }
                    else{
                        ans[j]++;
                    }
                } 
            }
        }
        */
        
    }
    return 0;
}