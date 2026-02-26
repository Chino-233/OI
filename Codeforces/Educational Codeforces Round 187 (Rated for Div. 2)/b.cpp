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
        ll x;
        cin>>x;
        ll temp=x;
        ll numsum=0;
        ll temp1=0;
        ll arr[12]={0};
        while (temp)
        {
            numsum+=temp%10;
            arr[temp%10]++;
            temp1=temp%10;
            temp/=10;
        }
        if(numsum<=9){
            cout<<0<<endl;
            continue;
        }
        ll ans=0;
        for(int i=9;i>=1;i--){
            if(i==temp1){
                for(int j=1;j<arr[i];j++){
                    numsum-=i;
                    ans++;
                    if(numsum<=9){
                        break;
                    }
                }
                if(numsum>9){
                    numsum-=(i-1);
                    ans++;
                }
            }
            else{
                for(int j=1;j<=arr[i];j++){
                    numsum-=i;
                    ans++;
                    if(numsum<=9){
                        break;
                    }
                }
            }
            if(numsum<=9){
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}