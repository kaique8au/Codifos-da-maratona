#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ios
    int n,m,x,y,ma=1;
    cin>>n>>m;
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
    for(int i=0; i<m; i++){
        cin>>x>>y;x--;y--;
        uni(x,y);
        cout<<quant<<' '<<ma<<'\n';
    }
}
signed main(){ios
    save();
}