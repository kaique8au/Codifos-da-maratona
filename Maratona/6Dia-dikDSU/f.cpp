#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ ios
    int n,m,x,y,z,tot=0;
    cin>>n>>m;
    int qua=n-1;
    vector<int> p(n),sz(n,1);
    iota(p.begin(),p.end(),0);
    auto find=[&](auto && find,int a)->int {
        if(p[a]==a)return a;
        return p[a]=find(find,p[a]);
    };
    auto uni=[&](int a,int b)->void {
        a=find(find,a);
        b=find(find,b);
        if(a==b)return;
        if(sz[a]<sz[b])swap(a,b);
        sz[a]+=sz[b];
        p[b]=a;
        qua--;
    };
    priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<>> pq;
    for(int i=0; i<m; i++){
        cin>>x>>y>>z;x--;y--;
        pq.emplace(z,x,y);
    }
    while(!pq.empty()){
        auto[c,a,b]=pq.top();
        pq.pop();
        if(find(find,a)==find(find,b))continue;
        tot+=c;
        uni(a,b);
    }
    if(qua)cout<<"IMPOSSIBLE\n";
    else cout<<tot<<'\n';
}
signed main(){ ios
    save();
}