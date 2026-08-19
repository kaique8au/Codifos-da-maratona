#include <bits/stdc++.h>
using namespace std;
#define int long long
void save(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    string f;
    map<string,string> mp;
    while(getline(cin, f)){
        if(f.empty())continue;
        stringstream ss(f);
        string s;
        vector<string> v;
        while(ss >> s){
            v.push_back(s);
        }
        if(v.size()==2){
            mp[v[1]]=v[0];
        }else{
            if(mp.count(v[0]))cout<<mp[v[0]]<<'\n';
            else cout<<"eh\n";
        }
    }
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    save();
}