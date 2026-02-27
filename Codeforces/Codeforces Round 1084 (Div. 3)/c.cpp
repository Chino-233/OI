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
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if(n%2==1){
            cout<<"NO"<<endl;
            continue;
        }
        queue<char>q;
        queue<char>q1;
        for(int i=0;i<n;i++){
            q.push(s[i]);
        }
        ll size=q.size();
        ll nowqueue=0;
        while (!(q.empty()&&q1.empty()))
        {
            if(nowqueue==0){
                while (!q.empty())
                {
                    char temp1=q.front();
                    q.pop();
                    if(q.empty()){
                        q1.push(temp1);
                        nowqueue=1;
                        continue;
                    }
                    char temp2=q.front();
                    if(temp1==temp2){
                        q.pop();
                    }
                    else{
                        q1.push(temp1);
                    }
                }
                nowqueue=1;
                if(!q1.empty()){
                    if(size==q1.size()){
                        break;
                    }
                    size=q1.size();
                }
            }
            else{
                while (!q1.empty())
                {
                    char temp1=q1.front();
                    q1.pop();
                    if(q1.empty()){
                        q.push(temp1);
                        nowqueue=0;
                        continue;
                    }
                    char temp2=q1.front();
                    if(temp1==temp2){
                        q1.pop();
                    }
                    else{
                        q.push(temp1);
                    }
                }
                nowqueue=0;
                if(!q.empty()){
                    if(size==q.size()){
                        break;
                    }
                    size=q.size();
                }
            }
        }
        if(q.empty()&&q1.empty()){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
        /*
        for(int k=0;k<10*n;k++){
            ll pos1=0;
            ll pos2=0;
            while (pos1<n&&pos2<n)
            {
                while(pos1<n&&s[pos1]=='*'){
                    if(s[pos1]=='*'){
                        pos1++;
                    }
                    else{
                        break;
                    }
                }
                if(pos1==n-1){
                    break;
                }
                pos2=pos1+1;
                while (pos2<n)
                {
                    if(s[pos2]=='*'){
                        pos2++;
                    }
                   celse{
                        break;
                    }
                }
                if(s[pos1]==s[pos2]&&s[pos1]!='*'){
                    s[pos1]='*';
                    s[pos2]='*';
                }
            }
        }
        ll flag=0;
        for(int i=0;i<n;i++){
            if()
        }
        */
        
    }
    return 0;
}