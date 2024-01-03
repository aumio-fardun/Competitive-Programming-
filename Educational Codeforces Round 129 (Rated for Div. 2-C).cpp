#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int t;  cin>>t;
 
    while(t--){
 
    int n;  cin>>n;  vector<int>a(n+1);  vector<int>b(n+1);   vector<int>pos;  bool ok=true;
 
    for(int i=1;i<=n;i++){
 
        cin>>a[i];
    }
 
    for(int i=1;i<=n;i++){
 
        cin>>b[i];
    }
 
    for(int i=2;i<=n;i++){
 
        if(a[i]<a[i-1]){
 
            if(b[i]>b[i-1]){
 
                cout<<-1<<endl;
 
                ok=false;  break;
            }
 
            else{
 
                int A=a[i];  a[i]=a[i-1];  a[i-1]=A;
 
                int B=b[i];  b[i]=b[i-1];  b[i-1]=B;
 
                pos.push_back(i);  pos.push_back(i-1);
 
                i=1;  continue;
            }
        }
 
        if(b[i]<b[i-1]){
 
             if(a[i]>a[i-1]){
 
                cout<<-1<<endl;
 
                ok=false;  break;
            }
 
            else{
 
 
                int A=a[i];  a[i]=a[i-1];  a[i-1]=A;
 
                int B=b[i];  b[i]=b[i-1];  b[i-1]=B;
 
                pos.push_back(i);  pos.push_back(i-1);
 
                i=1;  continue;
            }
        }
    }
 
    if(ok){
 
        cout<<pos.size()/2<<endl;
 
        for(int i=1;i<pos.size();i+=2){
 
            cout<<pos[i]<<" "<<pos[i-1]<<endl;
        }
    }
}
 
}
