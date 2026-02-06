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
    ll  n;
    cin>>n;
    set<int>s;
    ll ans=0;
    ll temp;
    cin>>temp;
    ans+=temp;
    s.insert(temp);
    for(int i=1;i<n;i++){
        cin>>temp;
        auto loit=s.lower_bound(temp);
        auto upit=s.upper_bound(temp);
        ll num=abs((*loit)-temp);
        if(loit!=s.begin()){
            loit--;
            upit--;
            num=min(num,abs(*(loit)-temp));
            num=min(num,abs(*(upit)-temp));
            loit++;
            upit++;
        }
        else if(upit!=s.end()){
            num=min(num,abs(*(upit)-temp));
        }
        s.insert(temp);
        ans+=num;
    }
    cout<<ans;
    return 0;
}