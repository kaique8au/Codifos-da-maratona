#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ios
    int n,x;
    cin>>n>>x;
    vector<int> v(n),pd(x+1,0);
    for(auto &k:v)cin>>k;
    pd[0]=1;
    for(int i=1; i<=x; i++){
        for(auto &j:v){
            if(i>=j){
                pd[i]+=pd[i-j];
                pd[i]%=1000000007;
            }
        }
    }
    cout<<pd[x]<<'\n';
}
signed main(){ios
    save();
}