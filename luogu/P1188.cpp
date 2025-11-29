#include <bits/stdc++.h>
#include <list>
using namespace std;

const int N = 1e5 + 10;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ll n,k;
    cin>>n>>k;
    list<int> l;
    for(int i=1;i<=n;i++){
        l.push_back(i);
    }
    
    for(int i=0;i<k;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        
        // 找到要剪切的范围 [a,b] (1-indexed)
        auto begin_it = l.begin();
        advance(begin_it, a-1);  // 转换为0-indexed
        
        auto end_it = l.begin();
        advance(end_it, b);      // end是开区间
        
        // 先保存要移动的元素
        list<int> temp;
        temp.splice(temp.begin(), l, begin_it, end_it);
        
        // 找到插入位置
        auto pos_it = l.begin();
        if(c > 0) {
            advance(pos_it, c);  // 插入到第c行之后
        }
        // 如果c=0，pos_it就是begin()，插入到开头
        
        // 插入剪切的内容
        l.splice(pos_it, temp);
    }
    
    // 输出前10行
    auto it = l.begin();
    for(int i = 0; i < 10 && it != l.end(); i++, it++){
        cout << *it << endl;
    }
    
    return 0;
}