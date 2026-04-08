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
    for(int i=0;i<s.length();i++){
        if(i==0){
            if(s[i]<='z'&&s[i]>='a'){
                s[i]+=('A'-'a');
            }
            cout<<s[i];
            continue;
        }
        else{
            if(s[i]<='Z'&&s[i]>='A'&&s[i-1]!='.'){
                cout<<".";
            }
            else if(s[i]<='z'&&s[i]>='a'&&s[i-1]=='.'){
                s[i]+=('A'-'a');
            }
        }
        if(i==s.length()-1){
            if(s[i]!='.'){
                cout<<s[i]<<".";
                break;
            }
            else{
                cout<<s[i];
                break;
            }
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}