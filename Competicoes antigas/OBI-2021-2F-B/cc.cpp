#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ios
    int n;
    string s;
    cin>>n>>s;
    int nn=0;
    for(int i=1; i<n; i++){
        if(n%i)continue;
        vector<vector<int>> vv((n/i),vector<int>(26));
        for(int k=0; k<i; k++)vv[0][s[k]-'a']++;
        int j,l;
        for(j=1; j<(n/i); j++){
            for(int k=i*j; k<i*(j+1); k++){
                // int nnn=;
                vv[j][s[k]-'a']++;
            }
            for(l=0; l<26 && vv[0][l]==vv[j][l]; l++);
            if(l<26)j=2*n-1;
        }
        if(j==(n/i)){
            nn=i;
            i=n;
        }
    }
    if(!nn)cout<<'*';
    else for(int i=0; i<nn; i++)cout<<s[i];
    cout<<endl;
}
signed main(){ios
    save();
}