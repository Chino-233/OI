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
    ll sum=0;
    while (n--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        ll pos1=s1.find("####");
        ll pos2=s2.find("\\boxed{");
        while (1)
        {
            if(s1.find("####",pos1+1)!=-1){
                pos1=s1.find("####",pos1+1);
            }
            else{
                break;
            }
        }
        pos1+=4;
        pos2+=7;
        ll num1=0;
        ll num2=0;
        while (pos1<s1.length())
        {
            num1*=10;
            num1+=s1[pos1]-'0';
            pos1++;
        }
        while (!(s2[pos2]=='}'))
        {
            num2*=10;
            num2+=s2[pos2]-'0';
            pos2++;
        }
        if(num1==num2){
            sum++;
        }
    }
    cout<<sum;
    return 0;
}