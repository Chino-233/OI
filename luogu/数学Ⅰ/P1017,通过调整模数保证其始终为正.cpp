#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll getnum(char c){
    if(c<='F'&&c>='A'){
        return 10+c-'A';
    }
    else{
        return c-'0';
    }
}
char getcha1(ll num){
    if(num>=10){
        return 'A'+num-10;
    }
    else{
        return '0'+num;
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n=10;
    ll sum;
    cin>>sum;
    ll sum1=sum;
    ll m;
    cin>>m;
    string s1="";
    while (sum)
    {
        ll temp=sum%m;
        sum/=m;
        if(temp<0){
            temp-=m;
            sum++;
        }
        s1+=getcha1(temp);
    }
    reverse(s1.begin(),s1.end());
    cout<<sum1<<"="<<s1<<"(base"<<m<<")";
    
    return 0;
}