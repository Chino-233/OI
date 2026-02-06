#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct boat{
    ll t;
    ll k;
    map<int,int>arr;
    queue<int>q1;
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n;
    cin>>n;
    map<int,int>nowpeople;
    queue<boat>q;
    ll ans=0;
    while (n--)
    {
        ll t,k;
        boat temp;
        cin>>t>>k;
        temp.t=t;
        temp.k=k;
        while (!q.empty()&&q.front().t<=t-86400)
        {
            while(!q.front().q1.empty()){
                ll i=q.front().q1.front();
                if(nowpeople[i]>0&&nowpeople[i]==q.front().arr[i]){
                    ans--;
                }
                nowpeople[i]-=q.front().arr[i];
                q.front().q1.pop();
            }
            q.pop();
        }
        ll x;
        for(int i=0;i<k;i++){
            cin>>x; 
            if(temp.arr.find(x)==temp.arr.end()||temp.arr[x]==0){
                temp.q1.push(x);
                temp.arr[x]=1;
            }
            else{
                temp.arr[x]++;
            }
            if(nowpeople.find(x)==nowpeople.end()||nowpeople[x]==0){
                ans++;
                nowpeople[x]=1;
            }
            else{
                nowpeople[x]++;
            }
        }
        q.push(temp);
        cout<<ans<<endl;
    }
    return 0;
}