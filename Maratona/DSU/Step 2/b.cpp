#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ios
    int n;
    cin>>n;
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
        sz[a]+=sz[b];
        p[b]=a;
    };
    for(int i=0; i<n; i++){
        int x;
        cin>>x;x--;
        if(find(x)==n-1){
            cout<<find(x)+1<<endl;
            uni(0,x);
        }else{
            cout<<find(x)+1<<endl;
            uni(find(x)+1,x);
        }
    }
}
signed main(){ios
    save();
}