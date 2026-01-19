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
    ll n,c;
    cin>>n>>c;
    ll arr[n+10]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll sum=0;
    ll l=0,r=0;
    for(int i=0;i<n;i++){
        // ①利用STL的做法
        // sum+=upper_bound(arr,arr+n,arr[i]+c)-lower_bound(arr,arr+n,arr[i]+c);
        // ②模拟上面的STL，用双指针进行滑动。
        while (l<n&&arr[l]<arr[i]+c)
        {
            l++;
        }
        while (r<n&&arr[r]<=arr[i]+c)
        {
            r++;
        }
        sum+=r-l; 
    }
    cout<<sum;
    return 0;
}