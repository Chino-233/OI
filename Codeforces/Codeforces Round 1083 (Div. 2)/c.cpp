#include <bits/stdc++.h>
using namespace std;

// const int N = 1e6 + 10;
const int N = 10;
#define ll long long
struct blog{
    ll l;
    ll a[3010];
};
ll used[3010]={0};
bool cmp(blog a1,blog b1){
    ll* a=a1.a;
    ll* b=b1.a;
    ll la=a1.l;
    ll lb=b1.l;
    ll minnum=min(la,lb);
    for(int i=0;i<minnum;i++){
        while (used[a[la-i]]==1)
        {
            la--;
        }
        while (used[b[lb-i]]==1)
        {
            lb--;
        }
        if(a[la-i]<b[lb-i]){
            return 0;
        }
        else if(b[lb-i]<a[la-i]){
            return 1;
        }
    }
    return la<lb;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while (t--)
    {
        memset(used,0,sizeof(used));
        ll used2[3010]={0};
        ll n;
        cin>>n;
        blog bl[n+10];
        memset(bl,0,sizeof(bl));
        for(int i=0;i<n;i++){
            ll l;
            cin>>l;
            bl[i].l=l;
            for(int j=1;j<=l;j++){
                cin>>bl[i].a[j];
            }
        }
        stack<int>s;
        stack<blog>s1;
        for(int k=0;k<n;k++){
            ll pos=-1;
            blog now;
            for(int i=0;i<n;i++){
                if(!used2[i]){
                    if(pos==-1){
                        now=bl[i];
                        pos=i;
                    }
                    else{
                        if(cmp(now,bl[i])==1){
                            now=bl[i];
                            pos=i;
                        }
                    }
                }
            }
            used2[pos]=1;
            s1.push(now);
            for(int j=1;j<=now.l;j++){
                ll num=now.a[j];
                used[num]=1;
            }
        }
        while (!s1.empty())
        {
            blog now=s1.top();
            for(int j=1;j<=now.l;j++){
                ll num=now.a[j];
                s.push(num);
                used[num]=1;
            }
            s1.pop();
        }
        
        memset(used,0,sizeof(used));
        while (!s.empty())
        {
            if(!used[s.top()]){
                cout<<s.top()<<" ";
                used[s.top()]=1;
            }
            s.pop();
        }
        cout<<endl;
    }
    return 0;
}