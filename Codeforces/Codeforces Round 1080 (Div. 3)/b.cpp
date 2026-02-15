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
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        ll flag=0;
        for(int i=1;i<=n;i++){
            if(a[i]!=i){
                ll temp1=i;
                ll temp2=a[i];
                if(temp1<temp2){
                    swap(temp1,temp2);
                }
                if(temp1%temp2==0){
                    ll temp3=temp1/temp2;
                    while(temp3>=2){
                        if(temp3%2!=0){
                            flag=1;
                            break;
                        }
                        temp3/=2;
                    }
                }
                else{
                    flag=1;
                    break;
                }
            }
        }
        if(flag){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}