#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll leagth;
ll getpos(ll pos){
    if(pos<=leagth){
        return pos;
    }
    ll temp=leagth;
    while (pos>temp*2)
    {
        temp*=2;
    }
    pos-=1;
    pos-=temp;
    if(pos<=0){
        pos+=temp;
    }
    return getpos(pos);

    
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n;
    string s;
    cin>>s;
    cin>>n;
    leagth=s.length();
    cout<<s[getpos(n)-1];
    return 0;
}