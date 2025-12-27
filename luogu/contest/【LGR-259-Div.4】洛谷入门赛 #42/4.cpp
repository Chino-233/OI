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
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll sum=0;
        for(int y=1;y<=c;y++){
            for(int x=a;x>=1;x--){
                if(a%x==0){
                    if((a/x)+b*y==c){
                        sum++;
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}