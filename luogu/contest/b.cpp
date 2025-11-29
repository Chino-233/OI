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
    float w,f,a,r;
    cin>>w>>f>>a>>r;
    if(r>0&&w==0){
        cout<<"Rejected";
    }
    else if((f/w)-0.2<=0.00001&&(a/w)-0.3<=0.00001&&w>=r){
        cout<<"Accepted";
    } 
    else{
        cout<<"Rejected";
    }
    return 0;
}