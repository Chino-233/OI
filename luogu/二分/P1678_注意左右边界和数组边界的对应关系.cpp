#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
ll m,n;
ll judge(ll pos,ll* school){
    ll left=0;
    ll right=m-1;
    ll mid=-1;
    while (right-left>1)
    {
        mid=(left+right)/2;
        if(school[mid]<pos){
            left=mid;
        }
        else{
            right=mid;
        }
    }
    return min(abs(pos-school[left]),abs(pos-school[right]));
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    cin>>m>>n;
    ll school[m+10]={0};
    for(int i=0;i<m;i++){
        cin>>school[i];
    }
    sort(school,school+m);
    ll sum=0;
    for(int i=0;i<n;i++){
        ll temp=-1;
        cin>>temp;
        sum+=judge(temp,school);
    }
    cout<<sum;
    return 0;
}