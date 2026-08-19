#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ios
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> sz(n,1),p(n);
    iota(p.begin(),p.end(),0);
    auto find=[&](this auto && find, int a)->int {
        if(p[a]==a) return a;
        return p[a]=find(p[a]);
    };
    auto uni=[&](int a, int b)->void {
        a=find(a);
        b=find(b);
        if(a==b)return;
        if(sz[a]<sz[b])swap(a,b);
        sz[a]+=sz[b];
        p[b]=a;
    };
    int tot=0;
    priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<>> qt;
    for(int i=0; i<m; i++){
        int x,y,z;
        cin>>x>>y>>z;x--;y--;
        qt.emplace(z,x,y);
    }
    while(!qt.empty()){
        auto[c,a,b]=qt.top();
        qt.pop();
        if(find(a)==find(b))continue;
        tot+=c;
        uni(a,b);
    }
    cout<<tot<<endl;
}
signed main(){ios
    save();
}