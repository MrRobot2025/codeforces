#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n>>s;
    set<string> so;
    for(int i=0;i<n-1;i++){
     string subpart = s.substr(i, 2);
     so.insert(subpart);
    }
    cout<<so.size()<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
       solve();
    }


    return 0;
}