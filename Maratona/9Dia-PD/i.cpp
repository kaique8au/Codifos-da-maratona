#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);
int main(){ios
    int n;
    cin>>n;
    vector<vector<double>> pd(n+1,vector<double>(n+1));
    pd[0][0]=1.0;
    for(int i=0; i<n; i++){
        double d;
        cin>>d;
        for(int j=0; j<=i; j++){
            pd[i+1][j]+=pd[i][j]*(1.0-d);
            pd[i+1][j+1]+=pd[i][j]*d;
        }
    }
    double r=0.0;
    for(int i=n/2+1; i<=n; i++)r+=pd[n][i];
    cout<<setprecision(10)<<r<<'\n';
}