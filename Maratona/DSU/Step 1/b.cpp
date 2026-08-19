#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);

void save(){ios
    int n,m,x,y;
    string s;
    cin>>n>>m;
    vector<tuple<int,int,int>> sz(n+1);
    vector<int> p(n+1);
    for(int i=0; i<=n; i++){
        sz[i]={i,i,1};
        p[i]=i;
    }
    // iota(p.begin(),p.end(),0);
    auto find=[&](this auto && find,int a)->int {
        if(p[a]==a)return a;
        return p[a]=find(p[a]);
    };
    auto uni=[&](this auto && uni,int a,int b)->void {
        int c=find(a);
        int d=find(b);
        if(c==d)return;
        if(sz[c]<sz[d])swap(c,d);
        auto[e,f,g]=sz[c];
        auto[h,i,j]=sz[d];
        sz[c]={min({e,h,a,b}),max({f,i,a,b}),g+j};
        p[d]=c;
    };
    while(m--){
        cin>>s;
        if(s=="get"){
            cin>>x;
            auto[a,b,c]=sz[find(x)];
            cout<<a<<' '<<b<<' '<<c<<'\n';
        }else{
            cin>>x>>y;
            uni(x,y);
        }
    }
}
signed main(){ios
    save();
}