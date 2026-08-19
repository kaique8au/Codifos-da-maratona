//alterar para que cada linha se torne um no e pronto e acabo vai dar bom 
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m,k,a,b,c,d,h;
    cin>>n>>m>>k;
    vector<vector<tuple<int,int,int>>> adj(n,vector<tuple<int,int,int>>(m));
    vector<int> x(n);
    for(auto&y:x)cin>>y;
    for(int i=0; i<k; i++){
        cin>>a>>b>>c>>d>>h;a--;b--;c--;d--;
        adj[a][b]={c,d,h};
    }
    priority_queue<tuple<int,int,int>> pq;
    vector<vector<int>> dis(n,vector<int>(m,1e18));
    pq.emplace(0,0,0);
    dis[0][0]=0;
    while(!pq.empty()){
        auto[ad,ai,aj]=pq.top();
        pq.pop();
        if(ad>dis[ai][aj])continue;
        int add[2]={1,-1};
        for(auto&bb:add){
            int bi=ai;
            int bj=aj+bb;
            int bd=ad+x[ai];
            if(bj>=0 && bj<m && dis[bi][bj]>bd){
                dis[bi][bj]=bd;
                pq.emplace(bd,bi,bj);
            }
        }
        auto[bi,bj,d]=adj[ai][aj];
        if(d){
            int bd=ad-d;
            if(dis[bi][bj]>bd){
                dis[bi][bj]=bd;
                pq.emplace(bd,bi,bj);
            }
        }
    }
    (dis[n-1][m-1]==1e18) ? (cout<<"NO ESCAPE\n") : (cout<<dis[n-1][m-1]<<'\n');
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}