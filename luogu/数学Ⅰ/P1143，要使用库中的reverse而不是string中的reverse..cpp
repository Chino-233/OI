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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll m;
    cin>>m;
    ll sum=0;
    for(int i=0;i<s.length();i++){
        sum*=n;
        sum+=getnum(s[i]);
    }
    if(sum==0){
        cout<<'0';
        return 0;
    }
    string s1="";
    while (sum)
    {
        s1+=getcha1(sum%m);
        sum/=m;
    }
    reverse(s1.begin(),s1.end());
    cout<<s1;
    
    return 0;
}