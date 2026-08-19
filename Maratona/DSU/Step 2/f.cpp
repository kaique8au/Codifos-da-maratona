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
    priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<>> qtme;
    priority_queue<tuple<int,int,int>> qtma;
    vector<int> szme(n+1,1),pme(n+1),szma(n+1,1),pma(n+1);
    iota(pme.begin(),pme.end(),0);
    iota(pma.begin(),pma.end(),0);
    auto findme=[&](this auto && findme, int a)->int {
        if(pme[a]==a) return a;
        return pme[a]=findme(pme[a]);
    };
    auto findma=[&](this auto && findma, int a)->int {
        if(pma[a]==a) return a;
        return pma[a]=findma(pma[a]);
    };
    auto unime=[&](int a, int b)->void {
        a=findme(a);
        b=findme(b);
        if(a==b)return;
        if(szme[a]<szme[b])swap(a,b);
        szme[a]+=szme[b];
        pme[b]=a;
    };
    auto unima=[&](int a, int b)->void {
        a=findma(a);
        b=findma(b);
        if(a==b)return;
        if(szma[a]<szma[b])swap(a,b);
        szma[a]+=szma[b];
        pma[b]=a;
    };
    for(int i=0; i<m; i++){
        int x,y,z;
        cin>>x>>y>>z;
        qtme.emplace(z,x,y);
        qtma.emplace(z,x,y);
    }
    int meme=1e9,mema=-1e9,mame=1e9,mama=-1e9;
    while(!qtme.empty()){
        auto[c,a,b]=qtme.top();
        qtme.pop();
        if(findme(a)==findme(b))continue;
        meme=min(meme,c);
        mema=max(mema,c);
        unime(a,b);
    }
    while(!qtma.empty()){
        auto[c,a,b]=qtma.top();
        qtma.pop();
        if(findma(a)==findma(b))continue;
        mame=min(mame,c);
        mama=max(mama,c);
        unima(a,b);
    }
    // auto dfs=[&](this auto && dfs,int at)->void {
    //     //viva
    // };
    
    // bitset<1001> bt;
    // if(bt.count()==n){
    //     if(c<ma && c>mi){

    //     }
    // }
    // bt.set(a,1);
    // bt.set(b,1);
    // bt[a]|1;
    // bt[b]|1;
    cout<<meme<<' '<<mema<<' '<<mame<<' '<<mama<<endl;
}
signed main(){ios
    save();
}