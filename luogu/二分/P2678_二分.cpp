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
    ll l,n,m;
    cin>>l>>n>>m;
    ll r=l;
    l=1;
    ll le[n+10]={0};
    for(int i=1;i<=n;i++){
        cin>>le[i];
    }
    le[n+1]=r+1;
    ll ans;
    while (l<=r)
    {
        ll mid=l+(ll)(r-l)/2;//如果l为0会有除以0的RE
        ll sum=0;
        ll leftpos=0;
        ll rightpos=0;// 既然一开始就直接加1，相当于直接检查下一个，这里也必须为0，为1就会跳到2了。
        while (rightpos<n+1)
        {
            rightpos++; //置于前部。因为这样才能判断rightpos==n+1的情况，放后面会跳过
            if(le[rightpos]-le[leftpos]<mid){
                sum++;
            }
            else{
                leftpos=rightpos;
            }
        }
        if(sum<=m){  //必须直接。或者说只由变量和限制条件决定。
            ans=mid;//必须确保答案所属的分支一定是最终结果的范围，或者说答案一定是满足条件的
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans;
    
    return 0;
}