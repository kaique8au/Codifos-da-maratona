#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ios
    int n,m,x,y;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    vector<pair<int,int>> ent(n+1),entse(m);
    vector<int> sz(n+1,1),p(n+1),res(n,-1);
    for(int i=0; i<=n; i++){
        adj[i].push_back(i);
        p[i]=i;
    }
    auto find=[&](this auto && find,int a){
        if(p[a]==a)return a;
        return p[a]=find(p[a]);
    };
    auto uni=[&](this auto && uni,int a,int b,int v){
        int f1=find(1);
        a=find(a);
        b=find(b);
        if(a==b)return;
        if(a==f1)for(auto &k:adj[b])res[k-1]=v;
        else if(b==f1)for(auto &k:adj[a])res[k-1]=v;
        if(sz[a]<sz[b])swap(a,b);
        sz[a]+=sz[b];
        p[b]=a;
        for(auto &k:adj[b])adj[a].push_back(k);
    };
    for(int i=1; i<=n; i++){
        cin>>ent[i].first>>ent[i].second;
        if(ent[i].first==-1)ent[i].first=0;
        if(ent[i].second==-1)ent[i].second=0;
    }
    for(int i=0; i<m; i++){
        cin>>x>>y;y--;
        if(y){
            entse[i]={x,ent[x].second};
            ent[x].second=0;
        }else{
            entse[i]={x,ent[x].first };
            ent[x].first=0;
        }
    }
    for(int i=1; i<=n; i++){
        if(ent[i].first)uni(i,ent[i].first,-1);
        if(ent[i].second)uni(i,ent[i].second,-1);
    }
    vector<bool> vis(n+1,false);
    for(int i=1; i<=n; i++){
        if(find(1)==find(i))vis[i]=true;
        else res[i-1]=m;
    }
    for(int i=m-1; i>=0; i--){
        uni(entse[i].first,entse[i].second,i);
    }
    for(auto i:res)cout<<i<<"\n";
}
signed main(){ios
    save();
}