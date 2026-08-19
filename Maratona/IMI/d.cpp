#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,int>>> pai(n,vector<pair<int,int>>(m));
    vector<vector<int >>dis(n,vector<int >(m,1e9));
    vector<vector<bool>>vis(n,vector<bool>(m));
    vector<vector<char>> ma(n,vector<char>(m));
    for(auto & i:ma)for(auto & j:i)cin>>j;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(ma[i][j]=='>'){
                vis[i][j]=true;
                for(int y=j+1; y<m && ma[i][y]=='.'; y++)vis[i][y]=true;
            }else{
                if(ma[i][j]=='<'){
                    vis[i][j]=true;
                    for(int y=j-1; y>=0 && ma[i][y]=='.'; y--)vis[i][y]=true;
                }else{
                    if(ma[i][j]=='v'){
                        vis[i][j]=true;
                        for(int x=i+1; x<n && ma[x][j]=='.'; x++)vis[x][j]=true;
                    }else{
                        if(ma[i][j]=='^'){
                            vis[i][j]=true;
                            for(int x=i-1; x>=0 && ma[x][j]=='.'; x--)vis[x][j]=true;
                        }
                    }
                }
            }
        }
    }
    if(vis[0][0]){
        cout<<"-1\n";
        return 0;
    }
    queue<pair<int,int>> qp;
    qp.emplace(0,0);
    pai[0][0]={-1,-1};
    dis[0][0]=0;
    while(!qp.empty()){
        auto[iat,jat]=qp.front();
        qp.pop();
        int add[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        for(auto[ibt,jbt]:add){
            ibt+=iat;
            jbt+=jat;
            if(ibt<n && ibt>=0 && jbt<m && jbt>=0 && !vis[ibt][jbt] && dis[ibt][jbt]>dis[iat][jat]+1){
                dis[ibt][jbt]=dis[iat][jat]+1;
                pai[ibt][jbt]={iat,jat};
                qp.emplace(ibt,jbt);
            }
        }
    }
    if(dis[n-1][m-1]==1e9)cout<<"-1\n";
    else{
        int it=n-1,jt=m-1;
        while(it!=-1 && jt!=-1){
            ma[it][jt]='X';
            int itt=pai[it][jt].first;
            int jtt=pai[it][jt].second;
            it=itt;
            jt=jtt;
        }
        for(auto i:ma){
            for(auto j:i)cout<<j;
            cout<<'\n';
        }
    }
}