/*
基于欧拉函数计算方式和线性筛的做法。
问题：第一个，没有老老实实按照sqrt的方法去约束质数的计算还有相应数组的取值。
第二个，对于“寻找到第一个与该数整除的数：(l-1)/prime[i]+1)*prime[i]，不熟悉。
第三个，对于在只涉及到每个数的质数分解的底数的情况下，分离计算该东西的操作与其他代码操作（在本题中是计算欧拉函数）
第四个，在第三步的处理中忘记了大于r的质数处理。这两个必须一起。
第五个，在计算的过程当中忘记了一开始的变换。在这里是非互质个数到互质个数的转换
第六个，不去看数据范围自己主动去设置数组范围。绝对不能靠'测试"。
*/
#include <bits/stdc++.h>
using namespace std;
// const int N = 1e6 + 10;
//const int N = 100000;
#define ll long long
ll MOD=666623333;
ll N1=1000010;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll l,r;
    cin>>l>>r;
    ll n=sqrt(r)+1;
    ll ans=0;
    ll prime[n+1000]={0};
    ll vis[n+1000]={0};
    ll cot=0;
    vis[1]=1;
    for(ll i=2;i<=n;i++){
        if(!vis[i]){
            prime[++cot]=i;
        }
        for(ll j=1;j<=cot&&i*prime[j]<=n;j++){
            vis[i*prime[j]]=1;
            if(i%prime[j]==0) break;
        }
    }
    ll nownum[N1+1000]={0};
    ll noweuler[N1+1000]={0};
    for(ll i=l;i<=r;i++){
        nownum[i-l]=i;
        noweuler[i-l]=i;
    }
    for(ll i=1;i<=cot;i++){
        for(ll j=((l-1)/prime[i]+1)*prime[i];j<=r;j+=prime[i]){
            if(nownum[j-l]%prime[i]==0)
            {
                while(nownum[j-l]%prime[i]==0){
                    nownum[j-l]/=prime[i];
                }
            noweuler[j-l]=noweuler[j-l]/prime[i]*(prime[i]-1);
            }
        }
    }
    for(ll i=l;i<=r;i++){
        if(nownum[i-l]>1){
            noweuler[i-l]=noweuler[i-l]/nownum[i-l]*(nownum[i-l]-1);
        }
    }
    for(ll i=l;i<=r;i++){
        ans+=(i-noweuler[i-l]);
        ans%=MOD;
    }
    cout<<ans;
    return 0;
}