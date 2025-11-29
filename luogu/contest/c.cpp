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
    string s;
    cin>>s;
    if(s.length()%2==1){
        s='0'+s;
    }
    for(int i=0;i<s.length()/2;i+=2){
        swap(s[i+1],s[s.length()-i-1]);
        swap(s[i],s[s.length()-i-2]);
    }

    int flag=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!='0'){
            flag=1;
        }
        if(flag){
            cout<<s[i];

        }
        if(!flag&&i==s.length()-1){
            cout<<'0';
        }
    }
    return 0;
}