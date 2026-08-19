#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ios
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &k:v)cin>>k;
    int i=0,j=n-1,c=0;
    while(i<j){
        if(v[i]==v[j]){
            i++;
            j--;
        }else{
            if(v[i]<v[j]){
                i++;
                v[i]+=v[i-1];
            }else{
                j--;
                v[j]+=v[j+1];
            }
            c++;
        }
    }
    cout<<c<<endl;
}
signed main(){ios
    save();
}