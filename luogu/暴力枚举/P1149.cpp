#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
int arr[10]={6,2,5,5,4,5,6,3,7,6};
int countnum(ll n){
    ll temp=n;
    ll num=0;
    if(temp<10){
        num+=arr[temp];
    }
    else if(temp<100){
        num+=arr[temp%10];
        temp/=10;
        num+=arr[temp%10]; 
    }
    else if(temp<1000){
        num+=arr[temp%10];
        temp/=10;
        num+=arr[temp%10];
        temp/=10;
        num+=arr[temp%10];
    }
    else if(temp<10000){
        num+=arr[temp%10];
        temp/=10;
        num+=arr[temp%10];
        temp/=10;
        num+=arr[temp%10];
        temp/=10;
        num+=arr[temp%10];
    }
    return num;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n;
    cin>>n;
    ll num=0;
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            if(countnum(i)+countnum(j)+countnum(i+j)==n-4){
                num++;
            }
        }
    }
    cout<<num;
    return 0;
}