#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
int main(){ios
    int n,x;
    cin>>n>>x;
    vector<int> v(n),pd(x+1,1e9);
    for(auto &k:v)cin>>k;
    pd[0]=0;
    for(int i=1; i<=x; i++){
        for(auto &j:v){
            if(i-j<0)continue;
            pd[i]=min(pd[i],pd[i-j]+1);
        }
    }
    if(pd[x]==1e9)cout<<"-1\n";
    else cout<<pd[x]<<'\n';
}