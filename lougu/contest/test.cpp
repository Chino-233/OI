#include <bits/stdc++.h>
using namespace std;
//  const int N = 1e6 + 10;
  const int N = 10;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
    #endif
    int i=0;
    for(int i=0;i<18;i++){
        cout<<i<<": "<<pow(2,i)<<endl;
    }
    return 0;
}