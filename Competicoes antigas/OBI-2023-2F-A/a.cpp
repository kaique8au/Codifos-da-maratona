#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);

void save_a(){ios
    string s1,s2;
    int n1,n2,i;
    cin>>n1>>s1>>n2>>s2;
    for(i=0; i<n1 && i<n2 && s1[i]==s2[i]; i++);
    cout<<i<<endl;
}


void save_b(){ios
    int e,m,d;
    cin>>e>>m>>d;
    vector<vector<vector<int>>> q(2,vector<vector<int>>(e+1));
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        q[1][x].push_back(y);
        q[1][y].push_back(x);
    }
    for(int i=0; i<d; i++){
        int x,y;
        cin>>x>>y;
        q[0][x].push_back(y);
        q[0][y].push_back(x);
    }
    int c=0,ct=0;
    for(int i=0; i<e/3; i++){
        int x,y,z,t=0;
        cin>>x>>y>>z;
        for(auto &k:q[0][x])if(k==y || k==z)c++;
        for(auto &k:q[0][y])if(k==x || k==z)c++;
        for(auto &k:q[0][z])if(k==x || k==y)c++;
        for(auto &k:q[1][x])if(k==y || k==z)t++;
        for(auto &k:q[1][y])if(k==x || k==z)t++;
        for(auto &k:q[1][z])if(k==x || k==y)t++;
        ct+=q[1][x].size()+q[1][y].size()+q[1][z].size()-t;
    }
    cout<<(c+ct)/2<<endl;
}


void save_c(){ios
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &k:v)cin>>k;
    bitset<100001> bt;
    int i=0,j=0,ma=0;
    while(i<n && j<n){
        if(bt[v[j]]){
            ma=max(ma,j-i);
            int x;
            for(x=i; x<j && v[x]!=v[j]; x++)bt[v[x]]=false;
            i=x+1;
        }
        bt[v[j++]]=true;
    }
    ma=max(ma,j-i);
    cout<<ma<<endl;
}


void save_d(){ios
    int n,m;
    cin>>n>>m;
    vector<int> sz(n+1,1),p(n+1),va(n+1,1e9);
    iota(p.begin(),p.end(),0);
    auto findb=[&](this auto && findb, int x,int y)->int {
        int mi=1e9;
        unordered_map<int,int> mp;
        mp[x]=1e9;
        for(int i=x; p[i]!=i; i=p[i]){
            mi=min(mi,va[i]);
            mp[p[i]]=mi;
        }
        int i,mi2=1e9;
        for(i=y; !mp.contains(i) && p[i]!=i; i=p[i])mi2=min(mi2,va[i]);
        // cout<<mi<<' '<<mi2<<endl;
        return min(mp[i],mi2);
    };
    auto find=[&](this auto && find, int x)->int {
        if(p[x]==x)return x;
        return find(p[x]);
    };
    auto unite=[&](int a,int b,int x)->void {
        a=find(a);
        b=find(b);
        if(a==b)return;
        if(sz[a]<sz[b])swap(a,b);
        p[b]=a;
        va[b]=x;
        sz[a]+=sz[b];
    };
    priority_queue<tuple<int,int,int>> qt;
    for(int i=0; i<m; i++){
        int x,y,z;
        cin>>x>>y>>z;
        qt.emplace(z,x,y);
    }
    while(!qt.empty()){
        auto[pe,a,b]=qt.top();
        qt.pop();
        unite(a,b,pe);
    }
    int q;
    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        cout<<findb(x,y)<<endl;
        // if(x>y)swap(x,y);
        // cout<<x<<' '<<y<<endl;
        // cout<<endl;
        // cout<<min(findb(x,y),findb(y,x))<<endl;
    } 
    // for(auto &k:p )cout<<k<<endl;
    // cout<<endl;
    // for(auto &k:va)cout<<k<<endl;
}


void save_t(){ios
}

signed main(){ios
    // save_a();
    // save_b();
    // save_c();
    save_d();
    // save_t();
}