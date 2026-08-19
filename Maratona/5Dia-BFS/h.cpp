#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ ios
    int n,m,q,x,y,z,w;
    cin>>n>>m>>q;
    vector<int> a(n+1),b(m+1);
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=1; i<=m; i++)cin>>b[i];
    vector<bitset<4001>> abt(n+1);
    vector<bitset<4001>> bbt(m+1);
    for(int i=1; i<=n; i++){
        abt[i]=abt[i-1];
        abt[i][a[i]].flip();
    }
    for(int i=1; i<=m; i++){
        bbt[i]=bbt[i-1];
        bbt[i][b[i]].flip();
    }
    while(q--){
        cin>>x>>y>>z>>w;
        int s=0;
        bitset<4001> fbt=(abt[y]^abt[x-1])^(bbt[w]^bbt[z-1]);
        cout<<fbt.count()<<'\n';
    }
}
signed main(){ ios
    save();
}