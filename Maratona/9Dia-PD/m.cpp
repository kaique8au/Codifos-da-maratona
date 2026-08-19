#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
#define int long long
#define endl '\n'
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
void save(){ios
    string s;
    cin>>s;
    int n=s.size();
    vector<vector<int>> pd(n,vector<int>(13,0));
    if(s[0]=='?')for(int i=0; i<10; i++)pd[0][i]=1;
    else pd[0][s[0]-'0']=1;
    for(int i=1; i<n; i++){
        if(s[i]=='?'){
            for(int j=0; j<13; j++){
                for(int k=0; k<10; k++){
                    pd[i][(j*10+k)%13]+=pd[i-1][j];
                    pd[i][(j*10+k)%13]%=MOD;
                }
            }
        }else{
            for(int j=0; j<13; j++){
                pd[i][(j*10+(s[i]-'0'))%13]+=pd[i-1][j];
                pd[i][(j*10+(s[i]-'0'))%13]%=MOD;
            }
        }
    }
    cout<<pd[n-1][5]<<endl;
}
signed main(){ios
    save();
}