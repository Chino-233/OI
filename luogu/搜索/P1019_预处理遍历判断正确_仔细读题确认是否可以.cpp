#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll used[40];
ll conn[40][40];
string s[40];
ll maxstr;
ll n;
void dfs(ll now,ll length){
    maxstr=max(maxstr,length);
    for(int i=0;i<n;i++){
        if(used[i]<=1&&conn[now][i]>0){
            used[i]++;
            dfs(i,length+s[i].length()-conn[now][i]);
            used[i]--;
        }
    }
    return;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    memset(conn,0,sizeof(conn));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ll lei=s[i].length();
            ll lej=s[j].length();
            ll le=min(lei,lej);
            for(int k=1;k<le;k++){
                ll flag=0;
                for(int l=0;l<k;l++)
                    if(s[i][lei-k+l]!=s[j][l]){
                        flag=1;
                        break;
                    }
                if(!flag){
                    conn[i][j]=k;
                    break;
                }
            }
            
        }
    }
    string s1;
    cin>>s1;
    for(int i=0;i<n;i++){
        if(s[i][0]!=s1[0]){
            continue;
        }
        used[i]++;
        dfs(i,s[i].length());
        used[i]--;
    }
    cout<<maxstr;
    return 0;
}