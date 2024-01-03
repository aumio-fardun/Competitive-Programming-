#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int t;  cin>>t;
 
    while(t--){
 
    int n;  cin>>n;  vector<int>vv(n);  vector<int>v(n);  bool fck=false;
 
    for(int i=0;i<n;i++){
 
        cin>>vv[i];
 
        v[i]=vv[i];
    }
 
    sort(vv.begin(),vv.end());
 
    int t=0;
 
    if(n%2){
 
        if(n==1){
 
            cout<<"YES"<<endl;  continue;
        }
 
        if(v[t]!=vv[t]){
 
            cout<<"NO"<<endl;  continue;
        }
 
        else{
 
            t=1;
        }
    }
 
    for(int i=t;i<n;i+=2){
 
        if(v[i]!=vv[i] and  v[i]!=vv[i+1]){
 
            fck=true;  cout<<"NO"<<endl;  break;
        }
 
        if(v[i+1]!=vv[i+1] and v[i+1]!=vv[i]){
 
 
            fck=true;  cout<<"NO"<<endl;  break;
        }
    }
 
    if(!(fck)){
 
        cout<<"YES"<<endl;
    }
 
}
 
}
