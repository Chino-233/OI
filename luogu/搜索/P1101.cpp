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
    char arr[n+10][n+10];
    ll used[n+10][n+10];
    string s="yizhong";
    memset(arr,0,sizeof(arr));
    memset(used,0,sizeof(used));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(arr[i][j]=='y'){
                for(int k=1;k<7;k++){
                    if(s[k]!=arr[i+k][j]){
                        break;
                    }
                    if(k==6){
                        for(int m=0;m<7;m++){
                            used[i+m][j]=1;
                        }
                    }
                }
                for(int k=1;k<7;k++){
                    if(s[k]!=arr[i][j+k]){
                        break;
                    }
                    if(k==6){
                        for(int m=0;m<7;m++){
                            used[i][j+m]=1;
                        }
                    }
                }
                for(int k=1;k<7;k++){
                    if(s[k]!=arr[i+k][j+k]){
                        break;
                    }
                    if(k==6){
                        for(int m=0;m<7;m++){
                            used[i+m][j+m]=1;
                        }
                    }
                }
                for(int k=1;k<7;k++){
                    if(i-k<=0){
                        break;
                    }
                    if(s[k]!=arr[i-k][j]){
                        break;
                    }
                    if(k==6){
                        for(int m=0;m<7;m++){
                            used[i-m][j]=1;
                        }
                    }
                }
                for(int k=1;k<7;k++){
                    if(j-k<=0){
                        break;
                    }
                    if(s[k]!=arr[i][j-k]){
                        break;
                    }
                    if(k==6){
                        for(int m=0;m<7;m++){
                            used[i][j-m]=1;
                        }
                    }
                }
                for(int k=1;k<7;k++){
                    if(i-k||j-k<=0){
                        break;
                    }
                    if(s[k]!=arr[i-k][j-k]){
                        break;
                    }
                    if(k==6){
                        for(int m=0;m<7;m++){
                            used[i-m][j-m]=1;
                        }
                    }
                }
                for(int k=1;k<7;k++){
                    if(i-k<=0){
                        break;
                    }
                    if(s[k]!=arr[i-k][j+k]){
                        break;
                    }
                    if(k==6){
                        for(int m=0;m<7;m++){
                            used[i-m][j+m]=1;
                        }
                    }
                }
                for(int k=1;k<7;k++){
                    if(j-k<=0){
                        break;
                    }
                    if(s[k]!=arr[i+k][j-k]){
                        break;
                    }
                    if(k==6){
                        for(int m=0;m<7;m++){
                            used[i+m][j-m]=1;
                        }
                    }
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(used[i][j]==1){
                cout<<arr[i][j];
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}