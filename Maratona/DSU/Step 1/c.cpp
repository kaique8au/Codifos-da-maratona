#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save2(){ios
    int n,m,x,y;
    string s;
    cin>>n>>m;
    vector<int> p(n),p2(n),get(n,0),sz(n,1);
    iota(p.begin(),p.end(),0);
    iota(p2.begin(),p2.end(),0);
    auto find2=[&](this auto && find2,int a,int s)->int {
        if(p2[a]==a)return s+get[a];
        return find2(p2[a],s+get[a]);
    };
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
        get[b]-=get[a];
        p[b]=a;
        p2[b]=a;
    };
    while(m--){
        cin>>s;
        if(s=="get"){
            cin>>x;x--;
            cout<<find2(x,0)<<'\n';
        }else{
            if(s=="add"){
                cin>>x>>y;x--;
                get[find(x)]+=y;
            }else{
                cin>>x>>y;x--;y--;
                uni(x,y);
            }
        }
    }
}
void save(){ios
    int n,m,x,y;
    string s;
    cin>>n>>m;
    vector<int> p(n),get(n,0);
    iota(p.begin(),p.end(),0);
    vector<vector<int>> adj(n);
    auto dfs=[&](this auto && dfs, int at, int p, int v)->void {
        get[at]+=v;
        for(auto &bt:adj[at]){
            if(bt!=p)dfs(bt,at,v);
        }
    };
    auto find=[&](this auto && find,int a){
        if(p[a]==a)return a;
        return p[a]=find(p[a]);
    };
    auto uni=[&](this auto && uni,int a,int b){
        a=find(a);
        b=find(b);
        if(a==b)return;
        p[b]=a;
    };
    while(m--){
        cin>>s;
        if(s=="get"){
            cin>>x;x--;
            cout<<get[x]<<'\n';
        }else{
            if(s=="add"){
                cin>>x>>y;x--;
                dfs(x,-1,y);
            }else{
                cin>>x>>y;x--;y--;
                adj[x].push_back(y);
                adj[y].push_back(x);
                uni(x,y);
            }
        }
    }
}
signed main(){ios
    save2();
}