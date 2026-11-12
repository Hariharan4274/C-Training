#include<iostream>
using namespace std;
int main(){
  int data[6]={12,9,15,8,17,11};
  cout<<"First count: "<<data[0]<<endl;
  cout<<"First count: "<<data[size(data)-1]<<endl;  
  for(int i=size(data)-1;i>=0; i--){
    cout<<data[i]<<" ";
  }
  return 0;
}