#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int x,y,n=0,caso=1;
    while(cin>>x>>y && x && y){
        vector<vector<int>> adj(101);
        adj[x].push_back(y);
        n=max({n,x,y});
        while(cin>>x>>y && x && y){
            adj[x].push_back(y);
            n=max({n,x,y});
        }
        float total=0,qua=0;
        for(int i=1; i<=n; i++){
            queue<int> q;
            vector<int> dis(n+1,1e9);
            q.emplace(i);
            dis[i]=0;
            while(!q.empty()){
                int at=q.front();
                q.pop();
                for(auto&bt:adj[at]){
                    if(dis[bt]>dis[at]+1){
                        dis[bt]=dis[at]+1;
                        q.emplace(bt);
                    }
                }
            }
            for(int i=1; i<=n; i++){
                if(dis[i]==0||dis[i]==1e9)continue;
                qua++;
                total+=dis[i];
            }
            
        }
        printf("Case %d: average length between pages = %.3f clicks\n", caso++, total/qua);
    }
}
signed main(){
	ios_base::sync_with_stdio(false);
	save();
}