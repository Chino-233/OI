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
    stack<char>c;
    stack<int>pos;
    cin>>s;
    ll add[s.length()+10]={0};
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='['){
            c.push(s[i]);
            pos.push(i);
        }
        else{
            if(c.empty()){
                continue;
            }
            if(s[i]==')'){
                if(c.top()=='('){
                    add[i]=1;
                    add[pos.top()]=1;
                    c.pop();
                    pos.pop();
                }
            }
            else{
                if(c.top()=='['){
                    add[i]=1;
                    add[pos.top()]=1;
                    c.pop();
                    pos.pop();
                }
            }
        }
    }
    for(int i=0;i<s.length();i++){
        if(add[i]==0){
            if(s[i]=='('||s[i]==')'){
                cout<<"()";
            }
            else if(s[i]=='['||s[i]==']'){
                cout<<"[]";
            }
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}



