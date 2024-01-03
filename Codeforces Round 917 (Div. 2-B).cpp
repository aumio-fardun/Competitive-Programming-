#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll t;  cin>>t;
 
    while(t--){
 
   ll n;  cin>>n;  unordered_map<char,ll>bx;
 
   ll ct=0;
 
   string s;  cin>>s;
 
   if(s.length()==1){
 
    cout<<1<<endl;
 
    continue;
    
   }
 
   for(ll i=0;i<s.length();i++){
 
    if(bx[s[i]]<1){
 
        ct++;
    }
 
    bx[s[i]]++;
}
 
ll res=ct;
 
for(ll i=s.length()-1;i>=0;i--){
 
    bx[s[i]]--;
 
    if(bx[s[i]]<1){
 
        ct--;
    }
 
    res+=ct;
}
 
cout<<res<<endl;
 
 
}
 
}
