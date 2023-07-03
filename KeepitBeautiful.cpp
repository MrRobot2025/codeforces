#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        vector<int> v;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
            bool sfound=false;
            
            if(v.size()>=3){
                
             if(!sfound)
             {
                if(v[i-1]>v[i])
              {
                sfound=true;
              }
              else{
                cout<<"1";
              }
             }   
            else{
                if(sfound && v[0]<=v[i] && v[i-1]>=v[i]){
                cout<<"1";
              }
              else{
                v.pop_back();
                cout<<"0";
              }
            }
              
               
            }
            else{
                cout<<"1";
            }
           
        
        }
        cout<<endl;
    }
    return 0;
}