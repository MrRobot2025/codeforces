// https://codeforces.com/contest/1837/problem/C
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        if(s[0]=='?') s[0]='0';
        for(int i=1;i<n;i++){
            if(s[i]=='?') s[i]=s[i-1];
        }
        cout<<s<<endl;
    }


    return 0;
}

