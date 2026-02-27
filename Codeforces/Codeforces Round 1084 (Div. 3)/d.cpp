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
        ll n,x,y;
        cin>>n>>x>>y;
        ll p[n+10]={0};
        queue<ll>in;
        queue<ll>out;
        ll mininnum=0x3f3f3f3f3f;
        for(int i=1;i<=x;i++){
            cin>>p[i];
            out.push(p[i]);
        }
        for(int i=x+1;i<=y;i++){
            cin>>p[i];
            in.push(p[i]);
            mininnum=min(mininnum,p[i]);
        }
        for(int i=y+1;i<=n;i++){
            cin>>p[i];
            out.push(p[i]);
        }
        if(!out.empty()){
            while (out.front()<mininnum)
            {
                cout<<out.front()<<" ";
                out.pop();
                if(out.empty()){
                    break;
                }
            }
        }
        if(!in.empty()){
            while (in.front()!=mininnum)
            {
                in.push(in.front());
                in.pop();
            }
            while (!in.empty())
            {
                cout<<in.front()<<" ";
                in.pop();
            }
        }
        while(!out.empty()){
            cout<<out.front()<<" ";
            out.pop();
        }
        cout<<endl;
    }
    return 0;
}