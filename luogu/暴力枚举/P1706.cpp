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
    ll n;
    cin>>n;
    int arr[n+10]={0};
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    do{
        cout<<"    ";
        for(int i=0;i<n;i++){
            cout<<arr[i];
            if(i<n-1){
                cout<<"    ";
            }
            else{
                cout<<endl;
            }
        }cin>>n;
    }while (next_permutation(arr,arr+n));

    return 0;
}