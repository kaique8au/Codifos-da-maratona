#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ios
    int n,m;
    cin>>n>>m;
    vector<int> sz(n+1,1),p(n+1);
    iota(p.begin(),p.end(),0);
    auto find=[&](this auto && find,int a){
        if(p[a]==a)return a;
        return p[a]=find(p[a]);
    };
    auto uni=[&](this auto && uni,int a,int b){
        a=find(a);
        b=find(b);
        if(a==b)return;
        if(a<b)swap(a,b);
        sz[a]+=sz[b];
        p[b]=a;
    };
    for(int i=0; i<m; i++){
        char c;
        int x;
        cin>>c>>x;x--;
        if(c=='-')uni(x,find(x)+1);
        else{
            if(find(x)==n)cout<<"-1\n";
            else cout<<find(x)+1<<endl;
        }
    }
}
signed main(){ios
    save();
}