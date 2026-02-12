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
        //事实上，由于需要保持交换的两者为先偶后奇数（xx0 xx1），这样才不会跳动其他位数的数字，从而保证交换后的异或的数值必定为1；，因此，交换从2开始。
        // 最后一位放1，剩余交换。奇数情况下刚好多出一位，这个时候就得靠n顶上去，被顶的n-1丢到前面去。偶数刚刚好就不用理，这个时候就把1顶走的n丢前面去
        if(n%2==0){
            cout<<n<<" ";
            for(int i=2;i<=n-1;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<1;
        }
        else{
            cout<<n-1<<" ";
            for(int i=2;i<=n-2;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<n<<" "<<1;
            //1 2  n-1 n
            //2  n-1  n   1
        }
        /*
        if(n%2==1){
            cout<<2<<" "<<n<<" ";
            for(int i=3;i<=n-1;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<1;
        }
        else{
            cout<<2<<" "<<n-1<<" ";
            for(int i=3;i<=n-2;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<n<<" "<<1;
            //1 2  n-1 n
            //2  n-1  n   1

        }
        */
        cout<<endl;

    }
    return 0;
}