#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<int>> g;
vector<ll> cnt;


void dfs(int node,int parent){
    if(g[node].size()==1 && g[node][0]==parent){
        cnt[node]=1;
    }else{
        for(auto child:g[node]){
            if(child!=parent){
                dfs(child,node);
                cnt[node]+=cnt[child];
            }
        }
    }
}
void solve(){
    int n,q;
    cin>>n;

    g.assign(n,vector<int>());

    for(int i=0;i<n-1;i++){
        int a ,b;
        cin>>a>>b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }


    cin>>q;
    cnt.assign(n,0);
    dfs(0,-1);

    for(int i=0;i<q;i++){
        int x ,y;
        cin>>x>>y;
        x--;
        y--;
        ll res = cnt[x]*cnt[y];
        cout<<res<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
       solve();
    }
   return 0;
}