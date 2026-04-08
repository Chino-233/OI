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
    ll n,m;
    cin>>n>>m;
    for(int i=1;i<=2*n+1;i++){
        if(i%2==1){
            cout<<"+";
            for(int j=1;j<=m;j++){
                cout<<"-+";
            }
        }
        else{
            cout<<"|";
            for(int i=1;i<=m;i++){
                cout<<" |";
            }
        }
        cout<<endl;
    }
    return 0;
}