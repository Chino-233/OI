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
    string s;
    for(int i=1;i<=n;i++){
        cin>>s;
        //a e i o u
        cout<<(char)(s[0]-'a'+'A');
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                cout<<(char)(s[i+1]-'a'+'A');
            }
        }
        cout<<endl;
    }
    return 0;
}