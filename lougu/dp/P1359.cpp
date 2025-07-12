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
    int arr[n+10][n+10];
    for(int i=1;i<=n+8;i++){
        for(int j=0;j<=n+8;j++){
            arr[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    int dp[n+10]={0};
    for(int i=1;i<=n+8;i++){
        dp[i]=11451419;
    }
    dp[1]=0;
    for(int j=1;j<=n;j++){
        for(int i=1;i<j;i++){
            dp[j]=min(dp[j],dp[i]+arr[i][j]);
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}