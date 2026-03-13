#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
map<string,string>f;
string find(string s){
    if(f[s]!=s){
        f[s]=find(f[s]);
    }
    return f[s];
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    string now;
    set<string>s1;
    queue<string>qu;
    while(1){
        string s;
        cin>>s;
        if(s[0]=='#'){
            now=s.substr(1,s.length());
            if(f[now]==""){
                f[now]=now;
            }
        }
        else if(s[0]=='+'){
            string temp=s.substr(1,s.length());
            f[temp]=now;
        }
        else if(s[0]=='?'){
            now=s.substr(1,s.length());
            cout<<now<<" "<<find(now)<<endl;
        }
        else{
            break;
        }
    }
    return 0;
}