#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct divnum{
    ll up;
    ll down;
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    string s;
    cin>>s;
    ll pos=0;
    ll num=0;
    if(s[0]=='-'){
        pos++;
        num=s[pos]-'0';
        num*=-1;
    }
    else{
        num=s[pos]-'0';
    }
    pos++;
    ll num2=0;
    ll flag=0;
    queue<divnum>q;
    while(pos<s.length()){
        if(s[pos]=='+'){
            q.push((divnum){num,num2});
            num=0;
            num2=0; 
            flag=0;
        }
        else if(s[pos]=='-'){
            q.push((divnum){num,num2});
            num=0;
            num2=0; 
            pos++;
            num=s[pos]-'0';
            num*=-1;
            flag=0;
        }
        else if(s[pos]=='/'){
            flag=1;
        }
        else{
            if(!flag){
                num*=10;
                num+=s[pos]-'0';
            }
            else{
                num2*=10;
                num2+=s[pos]-'0';
            }
        }
        pos++;
    }
    q.push((divnum){num,num2});
    ll nowdiv=1;
    divnum nownum=q.front();
    q.pop();
    queue<divnum>q1;
    while (!q.empty())
    {
        ll temp=lcm(nownum.down,q.front().down);
        nownum.up*=(temp/nownum.down);
        q.front().up*=(temp/q.front().down);
        nownum.up+=q.front().up;
        nownum.down=temp;
        temp=gcd(nownum.up,nownum.down);
        nownum.up/=temp;
        nownum.down/=temp;
        q.pop();
    }
    ll temp=gcd(nownum.up,nownum.down);
    nownum.up/=temp;
    nownum.down/=temp;
    if(nownum.down!=1){
        cout<<nownum.up<<"/"<<nownum.down;
    }
    else{
        cout<<nownum.up;
    }
    return 0;
}