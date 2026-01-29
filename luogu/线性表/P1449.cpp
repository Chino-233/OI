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
    ll pos=0;
    ll num=0;
    stack<ll>st;
    while (pos!=s.length())
    {
        char c=s[pos];
        pos++;
        if(c<='9'&&c>='0'){
            num*=10;
            num+=c-'0';
        }
        else if(c=='.'){
            st.push(num);
            num=0;
        }
        else if(c=='+'){
            ll temp2=st.top();
            st.pop();
            ll temp1=st.top();
            st.pop();
            st.push(temp1+temp2);
        }
        else if(c=='-'){
            ll temp2=st.top();
            st.pop();
            ll temp1=st.top();
            st.pop();
            st.push(temp1-temp2);
        }
        else if(c=='*'){
            ll temp2=st.top();
            st.pop();
            ll temp1=st.top();
            st.pop();
            st.push(temp1*temp2);
        }
        else if(c=='/'){
            ll temp2=st.top();
            st.pop();
            ll temp1=st.top();
            st.pop();
            st.push(temp1/temp2);
        }
        else if(c=='@'){
            break;
        }
        else{
            break;
        }
    }
    cout<<st.top();
    return 0;
}