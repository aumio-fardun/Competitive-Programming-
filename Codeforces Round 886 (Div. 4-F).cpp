#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll t;  cin>>t;
 
    while(t--){
 
    ll n;  cin>>n;  unordered_map<ll,ll>bx;  ll res=0;
 
 
    for(ll i=0;i<n;i++){
 
        ll fg;  cin>>fg;
 
        if(fg<=n){
 
            bx[fg]++;  
        }
    }
 
    for(ll i=1;i<=n;i++){
 
        ll ct=0;
 
        for(ll j=1;j*j<=i;j++){
 
            if(i%j==0){
 
                if(j==i/j){
 
                    ct+=bx[j]; continue;
                }
 
                ct+=(bx[j]+bx[i/j]);
            }
        }
 
        res=max(res,ct);
    }
 
    cout<<res<<endl;
}
 
}
