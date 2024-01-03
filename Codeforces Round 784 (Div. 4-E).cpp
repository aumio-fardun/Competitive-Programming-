#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int t;  cin>>t;
 
    while(t--){
 
    int n;  cin>>n;  unordered_map<char,long long int>f;   unordered_map<char,long long int>ss;   unordered_map<string,long long int>bx;  long long int ct=0;  int y=n;
 
    while(n--){
 
        string s;  cin>>s;  bx[s]++; f[s[0]]++;  ss[s[1]]++; if(n==y-1)  continue;
 
        if(bx[s]==1){
 
            ct+=f[s[0]]-1;  ct+=ss[s[1]]-1;
        }
 
 
        else{
 
            ct+=f[s[0]]+ss[s[1]]-2*bx[s];
        }
 
}
 
cout<<ct<<endl;
 
}
 
}
