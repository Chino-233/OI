#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct game{
    ll x,y,c;
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll x1,y1,z;
    cin>>x1>>y1>>z;
    ll ans=0;
    for(int i=10;i<100;i++){
        for(int j=10;j<100;j++){
            ll c=0;
            ll x=i;
            ll y=j;
            while (c<z)
            {
                if((x+y)%2==1){
                    x-=(y%x);
                }
                else{
                    y-=(x%y);
                }
                if(x<c){
                    x+=y/2;
                    x++;
                }
                if(y<c){
                    y+=x/2;
                    y++;
                }
                c++;
            }
            if(x==x1&&y==y1){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}