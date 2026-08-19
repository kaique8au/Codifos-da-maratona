#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int r1,c1,r2,c2,r3,c3,caso=1;
    while(cin>>r1>>c1>>r2>>c2>>r3>>c3){
        r1--;c1--;r2--;c2--;r3--;c3--;
        queue<pair<int,int>> q;
        vector<vector<int>> dis(8,vector<int>(8,1e9));
        q.emplace(r1,c1);
        dis[r1][c1]=0;
        while(!q.empty()){
            auto[ai,aj]=q.front();
            q.pop();
            int add[8][2]={{1,1},{1,0},{0,1},{-1,1},{1,-1},{-1,-1},{-1,0},{0,-1}};
            for(auto&[i,j]:add){
                int bi=ai+i;
                int bj=aj+j;
                if(bi>=0 && bi<8 && bj>=0 && bj<8 && (bi!=r3 || bj!=c3) && dis[bi][bj]>dis[ai][aj]+1){
                    dis[bi][bj]=dis[ai][aj]+1;
                    q.emplace(bi,bj);
                }
            }
        }
        cout<<"Case "<<caso++<<": "<<dis[r2][c2]<<'\n';
    }
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    save();
}