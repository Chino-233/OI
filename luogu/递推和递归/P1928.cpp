#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
string exstr(){
    string s="";
    char c='/0';
    ll x=0;
    while (cin>>c)
    {
        if(c=='['){
            cin>>x;
            string s1=exstr();
            for(int i=0;i<x;i++){
                s+=s1;
            }
        }
        else if(c==']'){
            return s;
        }
        else{
            s+=c;
        }
    }
    return s;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    cout<<exstr();
    return 0;
}