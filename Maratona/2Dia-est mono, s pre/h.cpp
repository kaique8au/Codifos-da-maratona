#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,ans=0;
    cin>>n;
    vector<int> v(n);
    for(auto &k :v)cin>>k;
    queue<int> q;
    set<int> st;
    for(int i=0; i<n; i++){
        while(st.size() && st.contains(v[i])){
            st.erase(q.front());
            q.pop();
        }
        q.push(v[i]);
        st.emplace(v[i]);
        int tam=q.size();
        ans=max(ans,tam);
    }
    cout<<ans<<'\n';
}