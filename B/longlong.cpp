#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,cnt=0;
    cin>>n;
    bool nf=false;
    vector<long long> v(n,0);
    long long sum=0;
    for(int i=0;i<n;i++) cin>>v[i];

    for(int i=0;i<n;i++){
        if(v[i]<0){
            sum+=-v[i];
            nf=true;
        }
        else{
            sum+=v[i];
        }
        if(nf && v[i]>0){
            cnt++;
            nf=false;
        }

    }
    if(nf){
        cnt++;
    }
    cout<<sum<<" "<<cnt<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}