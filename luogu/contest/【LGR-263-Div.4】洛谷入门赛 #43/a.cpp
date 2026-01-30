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
    ll arr[4][4];
    ll posx=0,posy=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
            if(arr[i][j]==0){
                posx=i;
                posy=j;
            }
        }
    }
    ll sum=0;
    for(int i=0;i<4;i++){
        sum+=arr[posx][i];
    }
    cout<<10-sum;
    return 0;
}