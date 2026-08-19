#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,t;
    cin>>n>>t;
    int ans=0;
    vector<int> v(n+1,0);
    for(int i=0; i<n; i++)cin>>v[i];
    queue<int> q;
    int va=0;
    for(int i=0; i<=n; i++){
        while(va>t){
            va-=q.front();
            q.pop();
        }
        int tam=q.size();
        ans=max(ans,tam);
        q.push(v[i]);
        va+=v[i];
    }
    cout<<ans<<'\n';
}