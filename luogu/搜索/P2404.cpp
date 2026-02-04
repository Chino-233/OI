#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll n;
void dfs(ll nownum,queue<int> s){
    if(nownum==n){
        if(s.size()<=1){
            return;
        }
        cout<<s.front();
        s.pop();
        while (!s.empty())
        {
            cout<<"+"<<s.front();
            s.pop();
        }
        cout<<endl;
        return;
    }
    for(int i=1;i<=n-nownum;i++){
        if(!s.empty()){
            if(s.back()>i){
                continue;
            }
        }
        queue<int>s1=s;
        s1.push(i);
        dfs(nownum+i,s1);
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    cin>>n;
    queue<int>q;
    dfs(0,q);
    return 0;
}