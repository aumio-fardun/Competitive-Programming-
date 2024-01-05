#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll t;  cin>>t;
 
    while(t--){
 
        ll n;  cin>>n;
 
        string s ;  cin>>s;   unordered_map<char,ll>cts;  vector<ll>ct;
 
        ll k=0;
 
        for(ll i=0;i<n;i++){
 
            cts[s[i]]++;
        }
 
        for(auto y:cts){
 
            ct.push_back(y.second);
        }
 
        sort(ct.begin(),ct.end());
 
        ll rp=ct[ct.size()-1];  k+=rp;
 
        ct.pop_back();
 
        for(ll i=ct.size()-1;i>=0;i--){
 
            k+=ct[i];
 
            rp-=ct[i];
 
        }
 
        if(rp>0){
 
            cout<<rp<<endl;
        }
 
        else{
 
            cout<<k%2<<endl;
        }
}
}
