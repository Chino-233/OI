#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct borad{
    int x1;
    int x2;
    int y;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    int n;
    cin>>n;
    bool arr[10010][10010];
    for(int i=0;i<10010;i++){
        for(int j=0;j<10010;j++){
            arr[i][j]=0;
        }
    }
    stack<int> s;
    for(int i=0;i<n;i++){
        int y,x1,x2;
        cin>>y>>x1>>x2;
        for(int i=x1;i<=x2;i++){
            arr[i][y]=1;
        }
    }

    return 0;
}