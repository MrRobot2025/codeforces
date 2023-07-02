#include<bits/stdc++.h>
using namespace std;
bool solve(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int ode=v[0]%2;
    
        for(int i=1;i<n;i++){
            int odei=v[i]%2;
            if(odei!=ode){
                int num=v[i]-v[0];
                int odej=num%2;
                if(odej!=ode) return false;
            }
        }

        return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       if(solve()){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}

// If all the numbers in the array already have the same parity, then for each 𝑖
//  it is sufficient to assign 𝑏𝑖=𝑎𝑖
// .

// Otherwise, it is impossible to make all the numbers even by leaving them positive, because the parity changes only when subtracting an odd number, and we cannot make the minimum odd number an even number.

// It remains only to make all numbers odd, that is, subtract odd numbers from even numbers. This can be done if the minimum number in the array is odd, because we can subtract it from every even number.
