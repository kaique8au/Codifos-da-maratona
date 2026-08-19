#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ios
    int n,m,k,p;
    string s;
    cin>>n>>m>>k>>s;
    vector<string> v(m);
    for(auto &k:v){
        cin>>k;
        sort(k.begin(),k.end());
    }
    cin>>p;
    p--;
    vector<char> ans(m);
    for(int i=m-1; i>=0; i--){
        ans[i]=v[i][p%k];
        p/=k;
    }
    int c=0;
    for(auto &k:s){
        if(k=='#')cout<<ans[c++];
        else cout<<k;
    }
    cout<<endl;
}
signed main(){ios
    save();
}