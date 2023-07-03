#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());

    if(n<=3){
        cout<<v[n-1]-v[0]<<endl;
    }
    else{
        cout<<v[n-1]+v[n-2]-v[0]-v[1]<<endl;
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