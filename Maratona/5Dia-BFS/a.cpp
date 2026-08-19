#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int a,b;
    char ca,cb;
    while(cin>>ca>>a>>cb>>b){
        int ii=a-1,ij=ca-'a',fi=b-1,fj=cb-'a';
        queue<pair<int,int>> q;
        vector<vector<int>> dis(8,vector<int>(8,1e9));
        q.emplace(ii,ij);
        dis[ii][ij]=0;
        int add[8][2]={{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1}};
        while(!q.empty()){
            auto[ai,aj]=q.front();
            q.pop();
            for(auto&[i,j]:add){
                int bi=ai+i;
                int bj=aj+j;
                if(bi>=0 && bi<8 && bj>=0 && bj<8 && dis[bi][bj]>dis[ai][aj]+1){
                    dis[bi][bj]=dis[ai][aj]+1;
                    q.emplace(bi,bj);
                }
            }
        }
        cout<<"To get from "<<ca<<a<<" to "<<cb<<b<<" takes "<<dis[fi][fj]<<" knight moves.\n";
    }
}