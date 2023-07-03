#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n , d;
    cin>>n>>d;
    string s;
    cin>>s;
    int pos=-1;
    for(int i=0;i<n;i++){
        char ch = s[i];
        int num = ch - '0';
        if(num<=d){
            pos=i;
            break;
        }
    }
    string s1 = to_string(d);
    char cha=s1[0];
    s.insert(pos+1,1,cha);
    cout<<s<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}