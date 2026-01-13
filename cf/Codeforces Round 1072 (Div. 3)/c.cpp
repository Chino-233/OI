#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll n,k,minh;
ll flag=0;
map<int,int> read;
void cmpk(ll a,ll h){
    if(a<=k){
        return;
    }
    if(h>minh){
        return;
    }
    if(read.count(a)&&read[a]<=h){
        return;
    }
    if(a%2==0){
        ll temp=(ll)(a/2);
        if(temp==k){
            minh=min(minh,h);
            flag=1;
        }
        else{
            cmpk(temp,h+1);
            read[temp]=h;
        }
        return;
    }
    else{
        ll temp=(ll)(a/2);
        if(temp==k){
            minh=min(minh,h);
            flag=1;
        }
        else if(temp+1==k){
            minh=min(minh,h);
            flag=1;
        }
        else{
            cmpk(temp,h+1);
            read[temp]=h;
            cmpk(temp+1,h+1);
            read[temp+1]=h;
        }
        return;
    }
    return;
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
        cin>>n>>k;
        flag=0;
        minh=1145141919;
        cmpk(n,1);
        read.clear();
        if(flag==0&&n!=k){
            cout<<-1;
        }
        else if(n==k){
            cout<<0<<endl;
        }
        else{
            cout<<minh;
        }
        cout<<endl;
    }
    
    return 0;
}