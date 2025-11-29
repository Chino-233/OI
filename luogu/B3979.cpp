#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 5;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n;
    cin>>n;
    int arr[10][7]={
        1,1,1,1,1,1,0,
		0,1,1,0,0,0,0,
		1,1,0,1,1,0,1,
		1,1,1,1,0,0,1,
		0,1,1,0,0,1,1,
		1,0,1,1,0,1,1,
		1,0,1,1,1,1,1,
		1,1,1,0,0,0,0,
		1,1,1,1,1,1,1,
		1,1,1,1,0,1,1,
    };
    int arr1[10]={0};
    char s;
    ll m=-1;
    ll c[7]={0};
    while (cin>>s)
    {
        if(s<='9'&&s>='0'){
            if(m!=-1){
                for(int i=0;i<7;i++){
                    if(c[i]==0&&arr[m][i]==1){
                        arr1[i]=1;
                    }
                    else if(c[i]==1&&arr[m][i]==0){
                        arr1[i]=2;
                    }
                }
            }
            m=s-'0';
            for(int i=0;i<7;i++){
                c[i]=0;
            }
        }
        else{
            ll temp=s-'A';
            c[temp]=1;
        }
    }
    for(int i=0;i<7;i++){
        if(c[i]==0&&arr[m][i]==1){
           arr1[i]=1;
        }
        else if(c[i]==1&&arr[m][i]==0){
            arr1[i]=2;
        }
    }
    for(int i=0;i<7;i++){
        if(arr1[i]==1){
            cout<<"x";
        }
        else if(arr1[i]==2){
            cout<<"X";
        }
        else{
            cout<<"-";
        }
    }
     


    return 0;
}