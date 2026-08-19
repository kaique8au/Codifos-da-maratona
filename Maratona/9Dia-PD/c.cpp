#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
int main(){ios
    int n;
    cin>>n;
    vector<vector<int>> m(n+1,vector<int>(3)),pd(n+1,vector<int>(3));
    for(int i=1; i<=n; i++){
        for(int j=0; j<3; j++){
            cin>>m[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        pd[i][0]=max(pd[i-1][1],pd[i-1][2])+m[i][0];
        pd[i][1]=max(pd[i-1][0],pd[i-1][2])+m[i][1];
        pd[i][2]=max(pd[i-1][0],pd[i-1][1])+m[i][2];
    }
    cout<<max({pd[n][0],pd[n][1],pd[n][2]})<<'\n';
}