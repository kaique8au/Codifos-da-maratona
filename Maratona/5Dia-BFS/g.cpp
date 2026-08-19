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
    queue<pair<int,int>> qf;
    vector<vector<int>> disf(n,vector<int>(m,1e9));
    queue<pair<int,int>> q;
    vector<vector<int>> dis(n,vector<int>(m,1e9));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(adj[i][j]=='F'){
                qf.emplace(i,j);
                disf[i][j]=0;
            }else{
                if(adj[i][j]=='J'){
                    q.emplace(i,j);
                    dis[i][j]=0;
                }
            }
        }
    }
    while(!qf.empty()){
        auto[ai,aj]=qf.front();
        qf.pop();
        int add[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        for(auto&[i,j]:add){
            int bi=ai+i;
            int bj=aj+j;
            if(bi>=0 && bi<n && bj>=0 && bj<m && adj[bi][bj]!='#' && disf[bi][bj]>disf[ai][aj]+1){
                disf[bi][bj]=disf[ai][aj]+1;
                qf.emplace(bi,bj);
            }
        }
    }
    while(!q.empty()){
        auto[ai,aj]=q.front();
        q.pop();
        int add[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        for(auto&[i,j]:add){
            int bi=ai+i;
            int bj=aj+j;
            if(bi>=0 && bi<n && bj>=0 && bj<m && adj[bi][bj]!='#' && dis[bi][bj]>dis[ai][aj]+1){
                dis[bi][bj]=dis[ai][aj]+1;
                q.emplace(bi,bj);
            }
        }
    }
    int tm=1e9;
    for(int i=0; i<m; i++)if(dis[0][i]<disf[0][i]){
        tm=min(tm,dis[0][i]);
    }
    for(int i=0; i<m; i++)if(dis[n-1][i]<disf[n-1][i]){
        tm=min(tm,dis[n-1][i]);
    }
    for(int i=0; i<n; i++)if(dis[i][0]<disf[i][0]){
        tm=min(tm,dis[i][0]);
    }
    for(int i=0; i<n; i++)if(dis[i][m-1]<disf[i][m-1]){
        tm=min(tm,dis[i][m-1]);
    }
    if(tm!=1e9)cout<<tm+1<<'\n';
    else cout<<"IMPOSSIBLE\n";
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--)save();
}