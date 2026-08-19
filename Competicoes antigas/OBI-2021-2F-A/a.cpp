#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define ios ios_base::sync_with_stdio(false);cin.tie(nullptr);

void save_a(){ios
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<min({abs((a+b)-(c+d)),abs((a+c)-(b+d)),abs((a+d)-(b+c))})<<endl;
}


void save_b(){ios
    int n,m;
    cin>>n>>m;
    vector<vector<string>> adj(n,vector<string>(m));
    vector<map<string,int>> vmpl(n),vmpc(m);
    vector<int> vl(n),vc(m);
    map<string,bool> mb;
    map<string, int> mp;
    for(int i=0; i<n; i++){
        for(auto &k:adj[i])cin>>k;
        cin>>vl[i];
    }
    for(int i=0; i<m; i++)cin>>vc[i];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            vmpl[i][adj[i][j]]++;
            vmpc[j][adj[i][j]]++;
            mb[adj[i][j]]=false;
        }
    }
    int res=0,tot=mb.size();
    while(res<tot){
        for(int i=0; i<n; i++){
            int c=0,nn=0,soma=vl[i];
            string ss;
            for(auto &[x,y]:vmpl[i]){
                if(mb[x])soma-=y*mp[x];
                else{
                    c++;
                    nn=y;
                    ss=x;
                }
            }
            if(c==1){
                mp[ss]=soma/nn;
                mb[ss]=true;
                res++;
            }
        }
        for(int i=0; i<m; i++){
            int c=0,nn=0,soma=vc[i];
            string ss;
            for(auto &[x,y]:vmpc[i]){
                if(mb[x])soma-=y*mp[x];
                else{
                    c++;
                    nn=y;
                    ss=x;
                }
            }
            if(c==1){
                mp[ss]=soma/nn;
                mb[ss]=true;
                res++;
            }
        }
    }
    for(auto&[a,b]:mp){
        cout<<a<<' '<<b<<endl;
    }
}



void save_c(){ios
    int n,m;
    cin>>n>>m;
    vector<bitset<20>> adj(m);
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        x--; y--;
        adj[i][x]=1;
        adj[i][y]=1;
    }
    int c=0,t=pow(2,n);
    for(int i=1; i<t; i++,c++){
        bitset<20> bt(i);
        for(int j=0; j<m; j++){
            bitset<20> bt2=bt&adj[j];
            if(bt2.count()==2){
                c--;
                j=m;
            }
        }
    }
    cout<<c<<endl;
}



void save_d(){ios
    int n;
    cin>>n;
    vector<int> v(n),s(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i-1];
        s[i]=s[i-1]+v[i-1];
    }
    if(s[n]&1){
        cout<<"N\n";
        return;
    }
    int i=0,j=0,ver=0;
    while(i<n && j<n){
        if(s[j]-s[i]==s[n]/2){
            // cout<<"i>"<<i<<" j>"<<j<<" s[i]>"<<s[i]<<" s[j]>"<<s[j]<<endl;
            ver++;
            i++;
            j++;
        }else{
            if(s[j]-s[i]>s[n]/2)i++;
            else j++;
        }
    }
    // cout<<ver<<endl;
    cout<<((ver>1)?('S'):('N'))<<endl;
}



void save_t(){ios
    int n=0;
    for(int i=1,j=0; j<20; i<<=1,j++){
        n+=i;
        cout<<i<<endl;
    }
    cout<<n<<endl;
}



signed main(){ios
    // save_a();
    // save_b();
    // save_c();
    // save_d();
    // save_t();
}