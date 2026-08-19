#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(int n){
    int ans=0;
    vector<int> v(n+1,0);
    for(int i=0; i<n; i++)cin>>v[i];
    stack<int> st;
    for(int i=0; i<=n; i++){
        while(st.size() && v[st.top()]>v[i]){
            int h=v[st.top()];
            st.pop();
            int l=((st.empty()?(i):(i-st.top()-1)));
            ans=max(ans,h*l);
        }
        st.push(i);
    }
    cout<<ans<<'\n';
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    while(cin>>n && n)save(n);
}