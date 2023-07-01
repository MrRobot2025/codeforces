#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0,cmax=0;
        for(int i =0;i<n-1;i++){
            cnt++;
            if(s[i]!=s[i+1]){
                cnt=0;
            }
            cmax=max(cnt,cmax);
            
        }
        cout<<cmax+2<<endl;
    }


    return 0;
}

// Suppose there is a segment of length 𝑘
//  that consists of equal characters in 𝑠
// . This segment implies that there are at least 𝑘+1
//  distinct values in the answer: for example, if the segment consists of < signs, the first element should be less than the second element, the second element should be less than the third element, and so on, so the corresponding segment of the array 𝑎
//  contains at least 𝑘+1
//  different elements.

// So, the answer is at least 𝑚+1
// , where 𝑚
//  is the length of the longest segment of the string that consists of equal characters. Can we construct the array 𝑎
//  which will contain exactly 𝑚+1
//  distinct values? It turns out we can do it with the following greedy algorithm: let's use integers from 0
//  to 𝑚
//  for our array 𝑎
// , and let's construct it from left to right; every time we place an element, we choose either the largest possible integer we can use (if the next character is >) or the smallest possible integer we can use (if the next character is <). For example, for the string <><<<>, the first 6
//  elements of the array will be [0,3,0,1,2,3]
//  (and we can use any integer from 0
//  to 2
//  in the last position). That way, whenever a segment of equal characters begins, the current value in the array will be either 𝑚
//  or 0
// , and we will be able to decrease or increase it 𝑚
//  times, so we won't arrive at a situation where, for example, the current value is 0
//  and we have to find a smaller integer.

// So, the problem basically reduces to finding the longest contiguous subsegment of equal characters in 𝑠
// .