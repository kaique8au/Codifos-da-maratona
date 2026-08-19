#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    string s,ss;
    vector<string> adj;
    map<string,vector<string>> mp;
    while(cin>>s && s!="*"){
        adj.push_back(s);
    }
    sort(adj.begin(),adj.end(),[](const string a, const string b){return a.size()<b.size();});
    for(int i=0; i<adj.size(); i++){
        for(int j=i-1; j>=0 && adj[i].size()==adj[j].size(); j--){
            int erros=0;
            for(int k=0; k<adj[i].size() && erros<=1; k++){
                if(adj[i][k]!=adj[j][k])erros++;
            }
            if(erros<=1){
                mp[adj[i]].push_back(adj[j]);
            }
        }
        for(int j=i+1; j<adj.size() && adj[i].size()==adj[j].size(); j++){
            int erros=0;
            for(int k=0; k<adj[i].size() && erros<=1; k++){
                if(adj[i][k]!=adj[j][k])erros++;
            }
            if(erros<=1){
                mp[adj[i]].push_back(adj[j]);
            }
        }
    }
    getline(cin,s);
    while(getline(cin,s) && !s.empty()){
        stringstream ss(s);
        string sss;
        vector<string> v;
        while(ss>>sss){
            v.push_back(sss);
        }
        queue<string> q;
        map<string,int> dis;
        q.emplace(v[0]);
        dis[v[0]]=0;
        while(!q.empty()){
            string at=q.front();
            q.pop();
            for(auto &bt:mp[at]){
                if(dis.count(bt)){
                    if(dis[bt]>dis[at]+1){
                        dis[bt]=dis[at]+1;
                        q.emplace(bt);
                    }
                }else{
                    dis[bt]=dis[at]+1;
                    q.emplace(bt);
                }
            }
        }
        cout<<v[0]<<' '<<v[1]<<' '<<dis[v[1]]<<'\n';
    }
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,caso=0;
    cin>>n;
    while(n--){
        if(caso++)cout<<'\n';
        save();
    }
}