#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,k,x,y;
    cin>>n>>k;
    map<int,vector<int>> mp;
    for(int i=0; i<n; i++){
        cin>>x;
        mp[x].push_back(i);
    }
    for(int i=0; i<k; i++){
        cin>>x>>y;
        if(mp[x].empty() || mp[y].empty())cout<<"NO\n";
        else cout<<((mp[x][0]<mp[y][mp[y].size()-1])?("YES\n"):("NO\n"));
    }
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--)save();
}