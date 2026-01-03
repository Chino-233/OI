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
    ll n;
    cin>>n;
    ll arr[n+10]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,priority_queue<int,vector<int>,greater<int>>> team;
    map<int,priority_queue<int,vector<int>,greater<int>>>::iterator it;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        ll x=arr[i];
        if(team.find(x-1)!=team.end()){
            if(!team[x-1].empty()){
                int nowsmall=team[x-1].top();
                nowsmall++;
                team[x].push(nowsmall);
                team[x-1].pop();
            }
            else{
                team[x].push(1);
            }
        }
        else{
            team[x].push(1);
        }
    }
    int minqueue=1145141919;
    for(int i=0;i<n;i++){
        if(team.find(arr[i])!=team.end()){
            if(!team[arr[i]].empty()){
                minqueue=min(minqueue,team[arr[i]].top());
            }
        }
    }
    cout<<minqueue;
    return 0;
}