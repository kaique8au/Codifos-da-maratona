#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save2(){ios
    int n,q;
    cin>>n>>q;
    vector<int> sz(n+1,1),p(n+1),nxt(n+1);
    iota(nxt.begin(),nxt.end(),0);
    iota(p.begin(),p.end(),0);
    auto find=[&](this auto && find,int a){
        if(p[a]==a)return a;
        return p[a]=find(p[a]);
    };
    auto unite=[&](this auto && unite,int a,int b){
        a=find(a);
        b=find(b);
        if(a==b)return;
        if(sz[a]<sz[b])swap(a,b);
        sz[a]+=sz[b];
        p[b]=a;
    };
    auto getnext=[&](this auto && getnext,int a)->int {
        if(nxt[a]==a)return a;
        return nxt[a]=getnext(nxt[a]);
    };
    while(q--){
        int t,x,y;
        cin>>t>>x>>y;
        if(t==1)unite(x,y);
        else{
            if(t==2){
                if(x>y)swap(x,y);
                for(int crt=getnext(x); crt<y; crt=nxt[crt]=getnext(crt+1))unite(crt,crt+1);
            }else cout<<((find(x)==find(y))?("YES\n"):("NO\n"));
        }
    }
}
void save1(){ios
    int n,q;
    cin>>n>>q;
    vector<int> sz(n+1,1),p(n+1);
    iota(p.begin(),p.end(),0);
    auto find=[&](this auto && find,int a){
        if(p[a]==a)return a;
        return p[a]=find(p[a]);
    };
    auto unite=[&](this auto && unite,int a,int b){
        a=find(a);
        b=find(b);
        if(a==b)return;
        if(sz[a]<sz[b])swap(a,b);
        sz[a]+=sz[b];
        p[b]=a;
    };
    auto unite2=[&](this auto && unite2,int a,int b){
        for(int i=a+1; i<=b; i++){
            int c=find(a);
            int d=find(i);
            if(c==d)continue;
            if(sz[c]<sz[d])swap(c,d);
            sz[c]+=sz[d];
            p[d]=c;
        }
    };
    for(int i=0; i<q; i++){
        int k,x,y;
        cin>>k>>x>>y;
        if(k==1)unite(x,y);
        else{
            if(k==2){
                if(x>y)swap(x,y);
                unite2(x,y);
            }else{
                if(find(x)==find(y))cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
}
void save(){ios
    int n,q;
    cin>>n>>q;
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
        if(sz[a]<sz[b])swap(a,b);
        sz[a]+=sz[b];
        p[b]=a;
    };
    for(int i=0; i<q; i++){
        int k,x,y;
        cin>>k>>x>>y;
        if(k==1)uni(x,y);
        else{
            if(k==2){
                if(x>y)swap(x,y);
                for(int j=x+1; j<=y; j++)uni(x,j);
            }else{
                if(find(x)==find(y))cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
}
signed main(){ios
    save2();
}