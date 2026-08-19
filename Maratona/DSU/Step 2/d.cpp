#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save2(){ios
    int n,m;
    cin>>n>>m;
    vector<int> dis(n+1,0),p(n+1);
    iota(p.begin(),p.end(),0);
    // auto find=[&](int a)->int {
    //     int i,dt=0;
    //     for(i=a; p[i]!=i; i=p[i])dt+=dis[i];
    //     int dr=dt;
    //     for(int j=a,pp,de; p[j]!=j; j=pp){
    //         pp=p[j];
    //         de=dis[j];
    //         p[j]=i;
    //         dis[j]=dr;
    //         dr-=de;
    //     }
    //     return i;
    // };
    auto find=[&](this auto &&find, int a)->int {
        if(p[a]==a)return a;
        int pa=p[a];
        p[a]=find(p[a]);
        dis[a]+=dis[pa];
        return p[a];
    };
    for(int i=1; i<=m; i++){
        int k,x,y;
        cin>>k>>x;
        if(k==1){
            cin>>y;
            dis[x]=1;
            p[x]=y;
        }else{
            find(x);
            cout<<dis[x]<<endl;
        }
    }
}


void save1(){ios
    int n,m;
    cin>>n>>m;
    vector<int> sz(n+1,0),p(n+1),r;
    iota(p.begin(),p.end(),0);
    auto find=[&](this auto && find,int a)->int {
        if(sz[a]<=0)return sz[a];
        return find(p[a]);
    };
    auto uni=[&](this auto && uni,int a,int b)->void {
        sz[a]=sz[b]+1;
        p[a]=b;
    };
    vector<pair<int,int>> vpt(m),vp;
    for(int i=1; i<=m; i++){
        int k,x,y;
        cin>>k>>x;
        if(k==1){
            cin>>y;
            vp.emplace_back(x,y);
            vpt[i-1]={x,y};
        }else vpt[i-1]={0,x};
    }
    for(auto&[x,y]:vp | views::reverse)uni(x,y);
    for(auto&[x,y]:vpt | views::reverse){
        if(x)sz[x]*=-1;
        else{
            int re=sz[y]+find(y);
            r.push_back(((re<0)?(0):(re)));
        }
    }
    for(auto&k:r | views::reverse)cout<<k<<endl;
}

void save(){ios
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    vector<int> sz(n+1,0),p(n+1);
    iota(p.begin(),p.end(),0);
    auto dfs=[&](this auto && dfs,int  at,int  pai)->void {
        sz[at]++;
        for(auto &bt:adj[at]){
            if(pai!=bt)dfs(bt,at);
        }
    };
    auto find=[&](this auto && find,int a)->int {
        if(p[a]==a)return a;
        return p[a]=find(p[a]);
    };
    auto uni=[&](this auto && uni,int a,int b)->void {
        a=find(a);
        b=find(b);
        dfs(a,-1);
        p[a]=b;
    };
    for(int i=1; i<=m; i++){
        int k,x,y;
        cin>>k;
        if(k==1){
            cin>>x>>y;
            adj[y].push_back(x);
            uni(x,y);
        }else{
            cin>>x;
            cout<<sz[x]<<endl;
        }
    }
}
signed main(){ios
    save2();
}