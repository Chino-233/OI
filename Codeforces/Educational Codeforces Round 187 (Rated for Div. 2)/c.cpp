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
        ll s,m;
        cin>>s>>m;
        ll ans=0;
        ll nowdouble=1;
        ll temp1=s;
        ll temp2=m;
        /*
        while (temp1>=m)
        {
            ll temp3=temp2<<1;
            if(temp1<temp3){
                temp1-=temp2;
                temp2=m;
                ans+=nowdouble;
                nowdouble=1;
            }
            else{
                temp2<<=1;
                nowdouble*=2;
            }
        }
        */
        temp1%=m;
        ans+=(s-temp1)/m;
        ll flag=0;
        while (temp1&&temp2)
        {
            if(temp2%2==1){
                break;
            }
            if(temp1%2==1&&temp2%2==0){
                flag=1;
                break;
            }
            temp1/=2;
            temp2/=2;
        }
        if(flag){
            cout<<-1<<endl;
        }
        else{
            if(temp1>0){
                ans++;
            }
            cout<<ans<<endl;
        }
        /*
        ll sarr[100]={0};
        ll marr[100]={0};
        ll pos=0;
        while (s)
        {
            sarr[pos]=s%2;
            s/=2;
            pos++;
        }
        pos=0;
        while (m)
        {
            marr[pos]=m%2;
            m/=2;
            pos++;
        }
        ll ans=-1;
        ll nowans=0;
        ll flag=0;
        ll flag1=0;
        pos=-1;
        while (pos<=80)
        {
            pos++;
            if(flag==0){
                if(marr[pos]==0&&sarr[pos]==1){
                    cout<<-1<<endl;
                    break;
                }
                else if(marr[pos]==0&&sarr[pos]==0){
                    continue;
                }
                else{
                    flag=1;
                    nowans=1;
                }
            }
            else{
                if(marr[pos]==1){
                    nowans=1;
                    if(sarr[pos]==1){
                        flag1=1;
                    }
                    else{
                        flag1=0;
                    }
                }
                else{
                    nowans*=2;
                }
                if(sarr[pos]==1){
                    if(marr[pos]==0){
                        ans=max(ans,nowans+flag1);
                        if()
                    }
                    else{
                        ans=(ans,1);
                    }
                }
            }
        }
        if(flag){
            cout<<ans<<endl;
        }
        */
    }
    return 0;
}