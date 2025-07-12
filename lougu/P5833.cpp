#include <bits/stdc++.h>
using namespace std;
//  const int N = 1e6 + 10;
  const int N = 10;
#define ll long long
int judge(int edge[][10],int arr[],int n){
    for(int i=0;i<n;i++){
        int pos1=0;
        int pos2=0;
        for(int j=0;j<8;j++){
            if(arr[j]==edge[i][0]){
                pos1=j;
                break;
            }
        }
        for(int j=0;j<8;j++){
            if(arr[j]==edge[i][1]){
                pos2=j;
                break;
            }
        }
        if(abs(pos1-pos2)!=1){
            return 0;
        }
    }
    return 1;
}
int main(){
    #ifndef ONLINE_JUDGE
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
    #endif
    string s[8]={"Bessie","Buttercup","Belinda","Beatrice","Bella","Blue","Betsy","Sue"};
    sort(s,s+8);
    map<int,string> mp;
    map<string,int> mp1;
    int arr[10]={0};
    int j=0;
    for(auto i:s){
        //cout<<i<<endl;
        mp[j]=i;
        mp1[i]=j;
        arr[j]=j;
        j++;
    }
    int n;
    cin>>n;
    int edge[10][10];
    int edge1[10][10];
    for(int i=0;i<n;i++){
        int m,k;
        string temp;
        cin>>temp;
        m=mp1[temp];
        cin>>temp;
        cin>>temp;
        cin>>temp;
        cin>>temp;
        cin>>temp;
        k=mp1[temp];
        edge[i][0]=m;
        edge[i][1]=k;
    }
    for(int i=0;i<100000;i++){
        if(judge(edge,arr,n)){
            for(int j=0;j<8;j++){
                cout<<mp[arr[j]]<<endl;
            }
            break;
        }
        next_permutation(arr,arr+8);
    }
    return 0;
}