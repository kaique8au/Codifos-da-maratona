#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ ios
    int n,x,y,ma=1;
    cin>>n;
    int quant=n;
    vector<int> p(n),sz(n,1);
    iota(p.begin(),p.end(),0);
    auto find=[&](auto && find,int a)->int {
        if(p[a]==a)return a;
        return p[a]=find(find,p[a]);
    };
    auto uni=[&](int a,int b)->void {
        a=find(find,a);
        b=find(find,b);
        if(a==b)return;
        if(sz[a]<sz[b])swap(a,b);
        sz[a]+=sz[b];
        ma=max(ma,sz[a]);
        p[b]=a;
        quant--;
    };
    vector<pair<int,int>> ret,col;
    for(int i=0; i<n-1; i++){
        cin>>x>>y;x--;y--;
        int qu=quant;
        uni(x,y);
        if(qu==quant)ret.emplace_back(x+1,y+1);
    }
    for(int i=1; i<n; i++){
        if(find(find,0)!=find(find,i)){
            col.emplace_back(find(find,0)+1,i+1);
            uni(0,i);
        }
    }
    cout<<ret.size()<<'\n';
    for(int i=0; i<col.size(); i++){
        cout<<ret[i].first<<' '<<ret[i].second<<' '<<col[i].first<<' '<<col[i].second<<'\n';
    }
}
signed main(){ ios
    save();
}