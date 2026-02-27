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
        ll a[n+10]={0};
        ll flag=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(i>1&&a[i]<a[i-1]){
                flag=1;
            }
        }
        if(!flag){
            cout<<"Bob"<<endl;
            continue;
        }
        ll minprime[n+10]={0};
        for(int i=1;i<=n;i++){
            ll num=0;
            ll minnum=0x3f3f3f3f3f;
            ll temp=a[i];
            for(ll j=2;j<=temp/j;j++){
                if(temp%j==0){
                    minnum=min(minnum,j);
                    num++;
                    while (temp%j==0)
                    {
                        temp/=j;
                    }
                }
            }
            if(temp>1){
                minnum=min(minnum,temp);
                num++;
            }
            minprime[i]=minnum;
            if(minprime[i]==0x3f3f3f3f3f){
                minprime[i]=1;
            }
            if(num>=2){
                cout<<"Alice"<<endl;
                flag=2;
                break;
            }
        }
        if(flag==2){
            continue;
        }
        else{
            for(int i=2;i<=n;i++){
                    if(minprime[i]<minprime[i-1]){
                        cout<<"Alice"<<endl;
                        flag=3;
                        break;
                    }
            }
            if(flag!=3){
                cout<<"Bob"<<endl;
            }
        }

    }
    return 0;
}