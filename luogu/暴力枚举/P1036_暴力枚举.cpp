#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 30;
#define ll long long
ll n,k;
ll arr[N];
bool isPrime(int a){
    ll num=a;
    num=(int)sqrt(num);
    if(a<4){
        return 1;
    }
    for(int i=2;i<=num;i++){
        if(a%i==0){
            return 0;
        }        
    }
    return 1;

}
int judge(int num){
    int sum=0;
    int numsum=0;
    for(int i=0;i<n;i++){
        if(num&(1<<i)){
            sum+=arr[i];
            numsum++;
            if(numsum>k){
                return false;
            }
        }
    }
    if(numsum==k){
        if(isPrime(sum)){
            return 1;
        }
    }
    return 0;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    cin>>n>>k;
    ll num=1<<n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll sum=0;
    for(int i=0;i<num;i++){
        sum+=judge(i);
    }
    cout<<sum;
    return 0;
}