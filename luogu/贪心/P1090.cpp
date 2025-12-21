#include <bits/stdc++.h>
using namespace std;

//const int N = 1e6 + 10;
const int N = 10;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n;
    cin>>n;
    ll arr[n+10]={0};
    ll arr2[n+10]={0};
    for(int i=0;i<n+10;i++){
        arr[i]=11451419198101010;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n+10;i++){
        arr2[i]=11451419198101010;
    }
    ll pos1=0;
    ll pos2=0;
    ll end=0;
    ll sum=0;
    ll nownum=0;
    ll now=0;
    for(int k=0;k<n-1;k++){
        if(arr[pos1]<=arr2[pos2]){
            nownum+=arr[pos1];
            pos1++;
        }
        else{
            nownum+=arr2[pos2];
            pos2++;
        }
        if(arr[pos1]<=arr2[pos2]){
            nownum+=arr[pos1];
            pos1++;
        }
        else{
            nownum+=arr2[pos2];
            pos2++;
        }
        sum+=nownum;
        now=0;
        arr2[end]=nownum;
        end++;
        nownum=0;
    }
    cout<<sum;
    return 0;
}