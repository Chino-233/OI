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
    int n;
    cin>>n;
    ll d[n+10]={0};
    ll num=0;
    ll maxnum=-1;
    for(int i=0;i<n;i++){
        cin>>d[i];
        maxnum=max(d[i],maxnum);
    }
    ll maxd=maxnum;
    for(int i=0;i<maxd;i++){
        for(int j=0;j<n;j++){
            if(d[j]==maxnum){
                d[j]--;
                if(d[j+1]!=maxnum){
                    num++;
                }
            }
        }
        maxnum--;
    }
    cout<<num;
    return 0;
}