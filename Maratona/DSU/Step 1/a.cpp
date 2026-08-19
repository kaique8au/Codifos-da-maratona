#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ios
    int n,m,x,y;
    string s;
    cin>>n>>m;
    vector<int> sz(n,1),p(n);
    iota(p.begin(),p.end(),0);
    auto find=[&](this auto && find,int a){
        if(p[a]==a)return a;
        return p[a]=find(p[a]);
    };
    auto uni=[&](this auto && uni,int a,int b){
        a=find(a);
        b=find(b);
        if(a==b)return;
        if(sz[a]<sz[b])swap(a,b);
        sz[a]+=sz[b];
        p[b]=a;
    };
    while(m--){
        cin>>s>>x>>y;x--;y--;
        if(s=="get"){
            if(find(x)==find(y))cout<<"YES\n";
            else cout<<"NO\n";
        }else uni(x,y);
    }
}
signed main(){ios
    save();
}