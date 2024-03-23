#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
   ll t;  cin>>t;
 
  while(t--){
 
    ll n; cin>>n;
 
    map<ll,ll>cts;   vector<ll>nms;  bool mk=false;
 
    for(ll i=0;i<n;i++){
 
        ll num;  cin>>num;
 
        if(cts[num]==0){
 
            nms.push_back(num);
        }
 
        cts[num]++;
    }
 
    if(cts[0]==0){
 
        cout<<0<<endl; 
 
        continue;
    }
 
    sort(nms.begin(),nms.end());
 
    for(ll i=0;i<nms.size();i++){
 
        if(i>0 and abs(nms[i]-nms[i-1])>1){
 
            cout<<nms[i-1]+1<<endl;
            break;
        }
 
        if(cts[nms[i]]<2){
 
            if(mk){
 
                cout<<nms[i]<<endl;
                break;
            }
 
            mk=true;
        }
 
        if(i==nms.size()-1){
 
            cout<<nms[i]+1<<endl;
        }
    }
 
 
}
    }
