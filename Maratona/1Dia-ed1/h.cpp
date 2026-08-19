#include <bits/stdc++.h>
using namespace std;

void save2(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,r,c,cont=0;
    long long x,y;
    cin>>n>>m>>r>>c>>x>>y;
    r--;c--;
    vector<string> adj(n);
    for(auto &s : adj)cin>>s;
    deque<pair<int,int>> qp;
    vector<vector<int>> dis(n, vector<int>(m, 1e9));
    qp.push_front({r,c});
    dis[r][c]=0;
    int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};
    while(!qp.empty()){
        auto [i,j] = qp.front();
        qp.pop_front();
        for(int k=0; k<4; k++){
            int bi=i+dx[k];
            int bj=j+dy[k];
            if(bi>=0 && bi<n && bj>=0 && bj<m && adj[bi][bj]!='*'){
                int cost=((dy[k]==-1)?(1):(0));
                if(dis[bi][bj]>dis[i][j]+cost){
                    dis[bi][bj]=dis[i][j]+cost;
                    ((!cost)?(qp.push_front({bi,bj})):(qp.push_back({bi,bj})));
                }
            }
        }
    }
    for(int i=0; i<n; i++)for(int j=0; j<m; j++)if(dis[i][j]!=1e9 && dis[i][j]<=x && dis[i][j]+(j-c)<=y)cont++;
    cout<<cont<<'\n';
}

void save(){
    int n,m,ii,jj,ci,cj,cont=0;
    cin>>n>>m>>ii>>jj>>ci>>cj;
    ii--;jj--;
    vector<string> adj(n);
    for(auto & k:adj)cin>>k;
    priority_queue<tuple<int,int,int,int>> qt;
    vector<vector<pair<int,int>>> dis(n,vector<pair<int,int>>(m,{1e9,1e9}));
    qt.emplace(0,0,ii,jj);
    dis[ii][jj].first=0; 
    dis[ii][jj].second=0;
    while(!qt.empty()){
        auto[es,di,ai,aj]=qt.top();
        qt.pop();
        if((dis[ai][aj].first>ci || dis[ai][aj].second>cj)||(dis[ai][aj].first>es && dis[ai][aj].second>di))continue;
        int add[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
        for(auto&[i,j]:add){
            if(ai+i>=0 && ai+i<n && aj+j>=0 && aj+j<m && adj[ai+i][aj+j]=='.'){
                if(j==-1){
                    if(dis[ai+i][aj+j].first>es+1 || dis[ai+i][aj+j].second>di){
                        dis[ai+i][aj+j].first=es+1; 
                        dis[ai+i][aj+j].second=di;
                        qt.emplace(es+1,di,ai+i,aj+j);
                    }
                }else{
                    if(j==1){
                        if(dis[ai+i][aj+j].first>es || dis[ai+i][aj+j].second>di+1){
                            dis[ai+i][aj+j].first=es; 
                            dis[ai+i][aj+j].second=di+1;
                            qt.emplace(es,di+1,ai+i,aj+j);
                        }
                    }else{
                        if(dis[ai+i][aj+j].first>es || dis[ai+i][aj+j].second>di){
                            dis[ai+i][aj+j].first=es; 
                            dis[ai+i][aj+j].second=di;
                            qt.emplace(es,di,ai+i,aj+j);
                        }
                    }
                }
            }
        }
    }
    for(auto&k:dis)for(auto&[e,d]:k)if(e<=ci&&d<=cj)cont++;
    cout<<cont<<'\n';
}
int main() {
    save2();
}
