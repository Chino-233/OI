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
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>v(n+10);
    for(int i=1;i<=n;i++){
        ll k;
        cin>>k;
        for(int j=0;j<k;j++){
            ll temp=0;
            cin>>temp;
            v[i].push_back(temp);
        }
    }
    ll used[n+10]={0};
    while (m--)
    {
        ll t;
        cin>>t;
        vector<ll>chioce;
        ll flag=0;
        for(int i=1;i<=t;i++){
            ll x;
            cin>>x;
            chioce.push_back(x);
            if(used[x]==1){
                flag=1;
            }
            if(v[x].empty()){
                continue;
            }
            for(int j=0;j<v[x].size();j++){
                if(used[v[x][j]]==0||used[v[x][j]]==2){
                    flag=1;
                }
            }
        }
        for(int i=0;i<t;i++){
            ll x;
            cin>>x;
            if(flag){
                continue;
            }
            else{
                if(x>=60){
                    used[chioce[i]]=1;
                    cout<<"P";
                }
                else{
                    used[chioce[i]]=2;
                    cout<<"F";
                }
            }
        }
        if(flag){
            cout<<"Error";
        }
        cout<<endl;
    }
    return 0;
}