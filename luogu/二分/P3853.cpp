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
    ll l,n,k;
    cin>>l>>n>>k;
    ll le[n+10]={0};
    //multiset<int> ms;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        cin>>le[i];
        
    }
    ll ans;
    ll r=l;
    l=1;
    while (l<=r)
    {
        ll mid=l+(ll)(r-l)/2;//如果l为0会有除以0的RE
        ll sum=0;
        ll leftpos=0;
        ll rightpos=0;// 既然一开始就直接加1，相当于直接检查下一个，这里也必须为0，为1就会跳到2了。
        while (rightpos<n-1)
        {
            rightpos++; //置于前部。因为这样才能判断rightpos==n-1的情况，放后面会跳过
            if(le[rightpos]-le[leftpos]>mid){
                ll temp=le[rightpos]-le[leftpos];
                while (temp>mid)
                {
                    temp-=mid;
                    sum++;
                }
                leftpos=rightpos; //放完路标记得跳到下一个
            }
            else{
                leftpos=rightpos;
            }
        }
        if(sum<=k){  //必须直接。或者说只由变量和限制条件决定。
            ans=mid;//必须确保答案所属的分支一定是最终结果的范围，或者说答案一定是满足条件的
            r=mid-1; 
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans;
    /*
    for(int i=0;i<n;i++){
        ll temp=arr[i+1]-arr[i];
        pq.push(temp);
        //ms.insert(temp);
    }
    for(int i=0;i<k;i++){
        //ll temp=ms.upper_bound()
        ll temp=pq.top();
        pq.pop();
        if(temp<=1){
            continue;
        }
        else if(temp%2==0){
            temp/=2;
            pq.push(temp);
            pq.push(temp);
        }
        else{
            temp++;
            temp/=2;
            pq.push(temp);
            pq.push(temp-1);
        }
    }
    cout<<pq.top();
    */
    return 0;
}