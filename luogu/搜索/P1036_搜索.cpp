#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll addprime;
ll k;
ll n;
ll arr[N+10];
bool isPrime(int a){
    ll num=a;
    num=(ll)sqrt(num);
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
void dfs(ll nownum,ll choosenum,ll nowpos){
    if(choosenum==k){
        if(isPrime(nownum)){
            addprime++;
        }
        return;
    }
    if(nowpos==n){
        return;
    }
    dfs(nownum+arr[nowpos],choosenum+1,nowpos+1);
    dfs(nownum,choosenum,nowpos+1);
    return;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    dfs(0,0,0);
    cout<<addprime;
    return 0;
}