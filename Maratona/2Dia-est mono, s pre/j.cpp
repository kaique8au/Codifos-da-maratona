#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &k :v)cin>>k;
    stack<int> st;
    for(int i=0; i<n; i++){
        while(!st.empty() && v[st.top()]>=v[i])st.pop();
        if(st.empty())cout<<0<<((i==n-1)?('\n'):(' '));
        else cout<<st.top()+1<<((i==n-1)?('\n'):(' '));
        st.push(i);
    }
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    save();
}