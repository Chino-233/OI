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
    signed int n;
    cin>>n;
    signed int temp=n;
    temp=temp>>16;
    n=n<<16;
    cout<<(signed ll)temp+(signed ll)n;
    return 0;
}