#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct RGB{
    ll r,g,b;
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll h,w;
    cin>>h>>w;
    RGB I[h+10][w+10];
    RGB K[h+10][w+10];
    memset(I,0,sizeof(I));
    memset(K,0,sizeof(K));
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin>>I[i][j].r;
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin>>I[i][j].g;
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin>>I[i][j].b;
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin>>K[i][j].r;
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin>>K[i][j].g;
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin>>K[i][j].b;
        }
    }
    double diff[h+10][w+10];
    memset(diff,0,sizeof(diff));
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            double dr=I[i][j].r-K[i][j].r;
            double dg=I[i][j].g-K[i][j].g;
            double db=I[i][j].b-K[i][j].b;
            diff[i][j]=dr*dr+dg*dg+db*db;
        }
    }
    double sum[h+10][w+10];
    memset(sum,0,sizeof(sum));
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            sum[i][j]=diff[i][j];
            sum[i][j]+=sum[i-1][j];
            sum[i][j]+=sum[i][j-1];
            sum[i][j]-=sum[i-1][j-1];
        }
    }
    double PSNR=(double)(0x3f3f3f3f3f3f);
    ll minh=(h+1)/2;
    ll minw=(w+1)/2;
    for(int i=1;i<=h-minh+1;i++){
        for(int j=1;j<=w-minw+1;j++){
            for(int h1=minh;i+h1-1<=h;h1++){
                for(int w1=minw;j+w1-1<=w;w1++){
                    ll h2=i+h1-1;
                    ll w2=j+w1-1;
                    PSNR=min(PSNR,(sum[h2][w2]-sum[i-1][w2]-sum[h2][j-1]+sum[i-1][j-1])/(w1*h1));
                }
            }
        }
    }
    PSNR/=3;
    cout<<fixed<<setprecision(11)<<20*log10(255/sqrt(PSNR));
    return 0;
}