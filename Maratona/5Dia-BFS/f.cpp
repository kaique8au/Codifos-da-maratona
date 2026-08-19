#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<string> adj(n);
    for(auto &k:adj)cin>>k;
    deque<pair<int,int>> q;
    vector<vector<int>> dis(n,vector<int>(m,1e9));
    q.emplace_front(0,0);
    dis[0][0]=0;
    while(!q.empty()){
        auto[ai,aj]=q.front();
        q.pop_front();
        int add[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        for(auto&[i,j]:add){
            int bi=ai+i;
            int bj=aj+j;
            if(bi>=0 && bi<n && bj>=0 && bj<m && abs(bi-ai)+abs(bj-aj)==1){
                if(adj[ai][aj]==adj[bi][bj]){
                    if(dis[bi][bj]>dis[ai][aj]){
                        dis[bi][bj]=dis[ai][aj];
                        q.emplace_front(bi,bj);
                    }
                }else{
                    if(dis[bi][bj]>dis[ai][aj]+1){
                        dis[bi][bj]=dis[ai][aj]+1;
                        q.emplace_back(bi,bj);
                    }
                }
            }
        }
    }
    cout<<dis[n-1][m-1]<<'\n';
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--)save();
}