#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll t;  cin>>t;
 
    while(t--){
 
        ll n; cin>>n;   bool odd=false;   bool even=false;   ll tmp,po;  
 
        vector<ll>nums;
 
        for(ll i=0;i<n;i++){
 
            ll num;  cin>>num;
 
            if(num%2){
 
                odd=true;  
            }
 
            else{
 
                even=true;
            }
 
        if(i==0){tmp=num;}
 
        if(i==1){po=abs(num-tmp); tmp=num;}
        
        if(i>1){
 
                    po=__gcd(po,abs(tmp-num));  tmp=num;
                }
    }
    if(odd and even){
 
        cout<<2<<endl;  continue;
    }
 
    cout<<2*po<<endl;  continue;
    
    
   
}
 
} 
