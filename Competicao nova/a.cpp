#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void save_a(){
}



void save_b(){
}



void save_c(){
}



void save_d(){
}



void save_e()
{
    string s;
    cin>>s;
    int i=0,c=0,ce=0;
    bool t=false;
    if(s[0]=='(')
    {
        i=1;
        for(; s[i]=='('; i++)c++;
        for(; c>=0; i++)
        {
            if(s[i]=='('){
                if(s[i-1]=='-'){
                    for(;s[i]=='(';i++){
                        ce++;
                        c++;
                    }
                    t=true;
                }else{
                    if(ce>0){
                        for(;s[i]=='(';i++){
                            ce++;
                            c++;
                        }
                    }else c++;
                }
            }
            else
            {
                if(s[i]==')'){
                    c--;
                    if(ce>0){
                        ce--;
                        if(ce==0)t=false;
                    }
                }
                else
                {
                    if(s[i]=='+')
                    {
                        if(!t)s[i]='-';
                    }
                    else
                    {
                        if(s[i]=='-')
                        {
                            if(t)s[i]='+';
                        }
                    }
                }
            }
        }
        c++;
    }
    // cout<<s<<endl;
    // cout<<s[i]<<' '<<i<<' '<<t<<endl;
    for(; i<s.size(); i++)
    {
        if(s[i]=='('){
            if(s[i-1]=='-'){
                for(;s[i]=='(';i++){
                    ce++;
                    c++;
                }
                t=true;
            }else{
                if(ce>0){
                    for(;s[i]=='(';i++){
                        ce++;
                        c++;
                    }
                }else c++;
            }
        }
        else
        {
            if(s[i]==')'){
                c--;
                if(ce>0){
                    ce--;
                    if(ce==0)t=false;
                }
            }
            else
            {
                if(s[i]=='+')
                {
                    if(!t)s[i]='-';
                }
                else
                {
                    if(s[i]=='-')
                    {
                        if(t)s[i]='+';
                    }
                }
            }
        }
    }
    cout<<s<<endl;
}



void save_f(){
}



void save_g(){
    // int n,m;
    // cin>>n>>m;
    // vector<stack<int>> vs(m);
    // vector<int> v(n);
    // iota(v.begin(),v.end(),0);
    // for(int i=0; i<n; i+=m){
    //     for(int j=i,y=0; y<m; j++,y++){
    //         vs[y].emplace()
    //     }
    // }
}



void save_h(){
}



void save_i(){
}



void save_j(){
}



void save_k(){
}



void save_l(){
    int n,n1=0,n2=0;
    cin>>n;
    bitset<60> bt(n);
    for(int i=0,j=1,t=0,tt=1; i<60; i++,j*=2){
        if(bt[i]){
            if(t){
                n2+=j;
                t--;
            }else{
                n1+=j;
                t++;
            }
        }else{
            if(tt){
                tt--;
                n1+=j;
                n2+=j;
            }
        }
    }
    cout<<"YES\n"<<n1<<' '<<n2<<endl;
}



void save_m(){
    int n,k;
    cin>>n>>k;
    vector<int> pb(n),pc(n);
    iota(pb.begin(),pb.end(),0);
    iota(pc.begin(),pc.end(),0);
    auto findb=[&](this auto && findb, int x)->int {
        if(pb[x]==-1 || pb[x]==1e9)return 1e9;
        if(pb[x]==x)return x;
        return pb[x]=findb(pb[x]);
    };
    auto findc=[&](this auto && findc, int x)->int {
        if(pc[x]==n || pc[x]==1e9)return 1e9;
        if(pc[x]==x)return x;
        return pc[x]=findc(pc[x]);
    };
    while(k--){
        int x;
        cin>>x;
        int a=findb(x),b=findc(x);
        if(a==1e9)
        {
            cout<<b<<endl;
            pc[x]=b+1;
            pc[b]=b+1;
            pb[b]=a;
        }
        else
        {
            if(b==1e9)
            {
                cout<<a<<endl;
                pb[x]=a-1;
                pb[a]=a-1;
                pc[a]=b;
            }
            else
            {
                if(a==b)
                {
                    cout<<x<<endl;
                    pb[x]=a-1;
                    pc[x]=b+1;
                }
                else
                {
                    if(abs(a-x)<=abs(b-x))
                    {
                        cout<<a<<endl;
                        pb[x]=a-1;
                        pb[a]=a-1;
                        pc[a]=b;
                    }
                    else
                    {
                        cout<<b<<endl;
                        pc[x]=b+1;
                        pc[b]=b+1;
                        pb[b]=a;
                    }
                }
            }
        }

    }
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    // save_a();
    // save_b();
    // save_c();
    // save_d();
    // save_e();
    // save_f();
    // save_g();
    // save_h();
    // save_i();
    // save_j();
    // save_k();
    // save_l();
    save_m();
}