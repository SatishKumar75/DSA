#include<bits/stdc++.h>
using namespace std;
 
int main(){
 cout<<"enter size of array ";
 int n;
 int* arr= new int[n];
 cin>>n;
 for(int i=0;i<n;i++){
    cout<<"enter "<<i+1<<" element ";
    cin>>arr[i];
 }

 for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
       if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        
       }
    }
 }


  cout<<"shorted array is "<<endl;
  cout<<"[ ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"]";


 return 0;
}