#include<bits/stdc++.h>
 
using namespace std;
 
 
int main(){
 
    int t; cin>>t;
 
    while(t--){
 
    int n; cin>>n;
 
    string s;  cin>>s;  char match;  int ct=0;
 
    for(int i=0;i<s.length();i++){
 
        if(i==0){
 
            match=s[i];  cout<<1<<" ";  continue; 
        }
 
        if(s[i]==match){
 
            ct++;  cout<<((i+1)-ct)<<" ";
        }
 
        else{
 
            ct=0;
 
            cout<<(i+1)<<" ";
 
            match=s[i];
        }
    }
 
    cout<<endl;
}
 
 
}
