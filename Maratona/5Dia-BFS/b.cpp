#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,caso=1;
    while(cin>>n && n){
        int x,y;
        map<int,vector<int>> adj;
        set<int> st;
        for(int i=0; i<n; i++){
            cin>>x>>y;
            st.insert(x);
            st.insert(y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        while(cin>>x>>y && (x || y)){
            queue<pair<int,int>> q;
            map<int,int> dis;
            q.emplace(x,0);
            dis[x]=0;
            while(!q.empty()){
                auto[at,d]=q.front();
                q.pop();
                for(auto&bt:adj[at]){
                    if(dis.count(bt)){
                        if(dis[bt]>d+1){
                            dis[bt]=d+1;
                            q.emplace(bt,d+1);
                        }
                    }else{
                        dis[bt]=dis[at]+1;
                        q.emplace(bt,d+1);
                    }
                }
            }
            int quan=0;
            for(auto &[i,j]:dis){
                if(j<=y)quan++;
            }
            cout<<"Case "<<caso++<<": "<<st.size()-quan<<" nodes not reachable from node "<<x<<" with TTL = "<<y<<".\n";
        }
    }
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    save();
}