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
    ll r,c,k;
    cin>>r>>c>>k;
    char arr[r+10][c+10];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    ll num=0;
    for(int i=0;i<r;i++){
       ll temp=0;
       for(int j=0;j<c;j++){
        if(arr[i][j]=='#'){
            temp=0;
        }
        else if(arr[i][j]=='.'){
            temp++;
        }
        if(temp>=k){
            num++;
        }
       } 
    }
    for(int j=0;j<c;j++){
        if(k==1){
            break;
        }
       ll temp=0;
       for(int i=0;i<r;i++){
        if(arr[i][j]=='#'){
            temp=0;
        }
        else if(arr[i][j]=='.'){
            temp++;
        }
        if(temp>=k){
            num++;
        }
       } 
    }
    cout<<num;
    return 0;
}