#include<bits/stdc++.h>
using namespace std;
 
int main(){
 int n;
 cin>>n;
 int temp=n;
 for(int i=1;i<(n*2);i++){
    if(i<=n){
     for(int j=1;j<=i;j++){
        cout<<"*";
     }

    }else{
     for(int j=temp-1;j>=1;j--){
        cout<<"*";
    }
      temp--;
    }
   cout<<endl;
 }
 return 0;
}