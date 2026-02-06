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
    ll q;
    cin>>q;
    while (q--)
    {
        ll n;
        cin>>n;
        stack<int>s;
        ll pushed[n+10]={0};
        ll poped[n+10]={0};
        for(int i=0;i<n;i++){
            cin>>pushed[i];
        }
        for(int i=0;i<n;i++){
            cin>>poped[i];
        }
        ll pushnum=0;
        ll popnum=0;
        while(pushnum<n||(!s.empty()&&s.top()==poped[popnum]))
        {
            while(!s.empty()&&s.top()==poped[popnum]){
                s.pop();
                popnum++;
            }
            if(pushnum<n){
                s.push(pushed[pushnum]);
                pushnum++;
            }
        }
        if(popnum!=n){
            cout<<"No";
        }
        else{
            cout<<"Yes";
        }
        cout<<endl;
    }
    return 0;
}