#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll t;  cin>>t; 
 
    while(t--){
 
        ll x,y;  cin>>x>>y;  ll ct=0;
 
        while(true){
 
        if((x & 1) ^(y & 1)){
 
            break;
 
        }
 
        ct++;
        x=x >>1;
        y=y >>1;
 
       
    }
 
    ll res=pow(2,ct);
 
    cout<<res<<endl;
 
}
 
}
