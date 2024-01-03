#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll t;  cin>>t;
 
    while(t--){
 
        int n;  cin>>n;  vector<ll>in(n);  unordered_map<int,int>bx;  bool fck=false;  ll ct=0;
 
        for(ll i=0;i<n;i++){
 
            cin>>in[i];   bx[in[i]]++;
        }
 
        if(in[0]!=n){
 
            cout<<"NO"<<endl; continue;
        }
 
        sort(in.begin(),in.end());
 
        for(int i=0;i<n;i++){
 
            if(in[i]-ct==0){
 
                continue;
            }
 
            in[i]-=ct; ct+=in[i];
 
            if(bx[n-i]!=in[i]){
 
                fck=true; cout<<"NO"<<endl; break;
            }
    }
 
    if(!(fck)){
 
        cout<<"YES"<<endl;
    }
 
        
}
 
}
