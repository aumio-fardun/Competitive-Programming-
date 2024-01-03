#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int t;  cin>>t;
 
    while(t--){
 
    long long int n,c;  cin>>n>>c;  vector<long long int>tels(n+1);  long long int ct=0;
 
    for(long long int i=1;i<=n;i++){
 
        cin>>tels[i];  tels[i]+=i;
    }
 
    sort(tels.begin(),tels.end());
 
    for(long long int i=1;i<=n;i++){
 
        if(c<tels[i]){
 
            break;
        }
 
        ct++; c-=tels[i];
    }
 
    cout<<ct<<endl;
}
 
}
