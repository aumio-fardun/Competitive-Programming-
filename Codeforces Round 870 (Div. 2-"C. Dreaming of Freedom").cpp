#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int t;  cin>>t;
 
    while(t--){
 
    int n,m;  cin>>n>>m;
 
    if(n==1 or m==1){
 
        cout<<"YES"<<endl; continue;
    }
 
    if(n>m){
 
        int r=(m+1);
 
        if(n%2){
 
            for(int i=2;i*i<=n;i++){
 
                if(n%i==0){
 
                    r=i; break;
                }
            }
 
            if(m>=r){
 
                cout<<"NO"<<endl;
            }
 
            else{
 
                cout<<"YES"<<endl;
            }
        }
        
 
        else{
 
            cout<<"NO"<<endl;
        }
    }
 
    else{
 
        cout<<"NO"<<endl;
        
    }
 
}
 
}
