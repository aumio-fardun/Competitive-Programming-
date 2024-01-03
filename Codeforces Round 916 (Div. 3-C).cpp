#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll t;  cin>>t;
 
    while(t--){
 
        ll n,k;  cin>>n>>k;
 
        vector<ll>a(n+1);  vector<ll>b(n+1);  ll cm=INT_MIN;
 
        for(ll i=1;i<=n;i++){
 
            cin>>a[i];
        }
 
        for(ll i=1;i<=n;i++){
 
            cin>>b[i];
        }
        
        ll rs=0;  ll sm=0;
 
        for(ll i=1;i<=min(n,k);i++){
            
            sm+=a[i];
            cm=max(cm,b[i]);
 
            rs=max((sm+cm*(k-i)),rs);
        }
 
        cout<<rs<<endl;
 
    }
 
}
