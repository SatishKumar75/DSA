#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout<<"Testing"<<endl;
    vector<int>vector1;
    vector<int>vector2;
    
    // cout<<vector2.capacity()<<endl;
    // vector2.push_back(49);
    // cout<<vector2.capacity()<<endl;
    // cout<<vector2.at(1)<<endl;
    // cout<<vector2.size()<<endl<<endl;
    // for(int i=0; i<vector2.size();i++){
    //     cout<<vector2[i]<<endl;
    // }
    vector1.push_back(10);
    vector1.push_back(12);
   cout<<vector1.at(0)<<endl;
   cout<<vector1.at(1)<<endl;
   cout<< vector1.size()<<endl;
   vector2.push_back(100);
   vector2.push_back(200);
   cout<<vector2.at(0)<<endl;
   cout<<vector2.at(1)<<endl;
   cout<< vector2.size()<<endl;
   vector<vector<int>>vector_2d;
   vector_2d.push_back(vector1);
   vector_2d.push_back(vector2);
   cout<<"Testing"<<endl;
   cout<<vector_2d.at(0).at(1)<<endl;
   vector1.at(0)=1000;
   cout<<vector1.at(0)<<endl<<;
  cout<<vector_2d.at(0).at(0)<<endl;
  cout<<vector_2d.at(0).at(1)<<endl;
  cout<<vector_2d.at(1).at(0)<<endl;
  cout<<vector_2d.at(1).at(1)<<endl;
    return 0;
}