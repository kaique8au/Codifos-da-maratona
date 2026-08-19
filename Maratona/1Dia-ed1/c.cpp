#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> vec(n),f;
    for(auto &k:vec){
        cin>>k;
        if(k==1)f.push_back(0);
        f[f.size()-1]++;
    }
    int t=f.size();
    cout<<t<<'\n';
    for(int i=0; i<t; i++)cout<<f[i]<<((i==t-1)?('\n'):(' '));
}