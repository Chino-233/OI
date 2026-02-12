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
    while(t--){
        ll n;
        cin>>n;
        ll p[n+10]={0};
        ll a[n+10]={0};
        stack<int>s;
        for(int i=1;i<=n;i++){
            cin>>p[i];
        }
        for(int i=1;i<=n;i++){
            cin>>a[i];
            s.push(a[i]);
        }
        for(int i=n;i>=1;i--){
            while (!s.empty()&&s.top()==p[i])
            {
                s.pop();
            }
        }
        if(!s.empty()){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}