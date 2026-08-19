#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ios
    int n,m,k,x,y;
    string s;
    cin>>n>>m>>k;
    set<pair<int,int>> st;
    vector<pair<int,int>> ent(m);
    vector<tuple<int,int,int>> ope(k);
    vector<int> sz(n,1),p(n);
    iota(p.begin(),p.end(),0);
    auto find=[&](this auto && find,int a){
        if(p[a]==a)return a;
        return p[a]=find(p[a]);
    };
    auto uni=[&](this auto && uni,int a,int b){
        a=find(a);
        b=find(b);
        if(a==b)return;
        if(sz[a]<sz[b])swap(a,b);
        sz[a]+=sz[b];
        p[b]=a;
    };
    for(int i=0; i<m; i++){
        cin>>x>>y;x--;y--;
        ent[i]={min(x,y),max(x,y)};
    }
    for(int i=0; i<k; i++){
        cin>>s>>x>>y;x--;y--;
        if(s=="ask")ope[i]={0,x,y};
        else{
            ope[i]={1,x,y};
            st.emplace(min(x,y),max(x,y));
        }
    }
    for(auto &[i,j]:ent)if(!st.contains({i,j}))uni(i,j);
    vector<bool> res;
    for(auto &[l,i,j]:ope | views::reverse){
        if(l)uni(i,j);
        else if(find(i)==find(j))res.push_back(true);
        else res.push_back(false);
    }
    for(auto i:res | views::reverse){
        if(i)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
signed main(){ios
    save();
}