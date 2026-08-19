#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,caso=0;
    while(cin>>n){
        string x,y;
        map<string,vector<string>> adj;
        for(int i=0; i<n; i++){
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        cin>>x>>y;
        queue<string> q;
        map<string,int> dis;
        map<string,string> pai;
        q.emplace(x,0);
        dis[x]=0;
        pai[x]="00";
        while(!q.empty()){
            string at=q.front();
            q.pop();
            for(auto&bt:adj[at]){
                if(dis.count(bt)){
                    if(dis[bt]>dis[at]+1){
                        dis[bt]=dis[at]+1;
                        pai[bt]=at;
                        q.emplace(bt);
                    }
                }else{
                    dis[bt]=dis[at]+1;
                    pai[bt]=at;
                    q.emplace(bt);
                }
            }
        }
        if(caso++)cout<<'\n';
        if(!dis.count(y))cout<<"No route\n";
        else{
            vector<string> c;
            c.push_back(y);
            for(string i=y; pai[i]!="00"; i=pai[i])c.push_back(pai[i]);
            for(int i=c.size()-1; i>0; i--)cout<<c[i]<<' '<<c[i-1]<<'\n';
        }
    }
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    save();
}