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
    string n;
    cin>>n;
    ll k;
    cin>>k;
    ll len=n.length();
    while (k--)
    {
        for(int i=0;i<n.length();i++){
            if(n[i]>n[i+1]){
                string temp1=n.substr(0,i);
                string temp2=n.substr(i+1,n.length());
                n=temp1+temp2;
                break;
            }
        }
        ll flag=0;
        for(int i=0;i<n.length();i++){
            if(!flag&&n[i]=='0'&&n.length()!=1){
                n=n.substr(1,n.length());
            }
            else{
                flag=1;
            }
        }
    }
    cout<<n;
    return 0;
}