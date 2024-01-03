#include<bits/stdc++.h>
 
//num = static_cast<int>(ch)//
 
using namespace std;
 
 
int main(){
 
    int t;  cin>>t;
 
    while(t--){
 
    int n;  cin>>n;
 
    vector<vector<char>>vv(n+1,vector<char>(n+1));  int res=0; int t=n;
 
    for(int i=1;i<=n;i++){
 
        for(int j=1;j<=n;j++){
 
            cin>>vv[i][j];
        }
    }
 
    for(int j=0;j<n/2;j++){
 
    for(int i=0;i<=t-2;i++){
 
        int tmp=(vv[1+j][1+i+j]-'0')+(vv[1+i+j][n-j]-'0')+(vv[n-j][n-i-j]-'0')+(vv[n-i-j][1+j]-'0');
 
        tmp=min(tmp,(4-tmp));
 
        res+=tmp;
    }
 
    t-=2;
 
    
}
 
cout<<res<<endl;
 
}
 
}
